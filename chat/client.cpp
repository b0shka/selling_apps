#include "client.h"
#include "chat.h"

void Client::conect_server()
{
	client = socket(AF_INET, SOCK_STREAM, 0);

	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, IP, &hint.sin_addr);

	connect(client, (sockaddr*)&hint, sizeof(hint));
	
	strcpy(buffer, g_user_name.toLatin1());
	send(client, buffer, BUFFER, 0);

	recv(client, buffer, BUFFER, 0);
	//qDebug() << QString(buffer).split(";")[0].toLatin1().data();
	database.add_client_id(QString(buffer).toInt(), g_user_name);
	
	database.add_id_server(client, g_user_name);
	
	g_status_online = 1;
}

void Client::send_message(QString message, QString login)
{
	int status_online = database.get_status_online(login);
	if (status_online == 1)
	{
		int client_id = database.get_id_socket_user(login);
		message = QString::number(client_id) + ";" + message;
		QByteArray text_char = message.toLatin1();
		strcpy(buffer, text_char.data());
		send(client, buffer, BUFFER, 0);
		database.add_to_chat(login, g_user_name, message);
	}
	else
		database.add_new_message_to_database(g_user_name, login, message);
}

void Client::read_message()
{
	int client_socket = database.get_id_server(g_user_name);
	//chat chat_dev;
	while (g_status_online == 1)
	{
		recv(client_socket, buffer, BUFFER, 0);
		qDebug() << QString(buffer);
		//chat_dev.add_message_from_server(QString(buffer));
	}
}

void Client::disconnect()
{
	g_status_online = 0;
	QString message_close = g_user_name + ";[INFO] Close chat";
	QByteArray text_char = message_close.toLatin1();
	strcpy(buffer, text_char.data());
	send(client, buffer, BUFFER, 0);
}
