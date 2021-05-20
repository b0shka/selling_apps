#include "client.h"

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
	qDebug() << QString(buffer).split(";")[0].toLatin1().data();
	database.add_client_id(QString(buffer).split(";")[1].toInt(), g_user_name);
	
	g_status_online = 1;
}

void Client::send_message(QString message)
{
	if (message != "")
	{
		QByteArray text_char = message.toLatin1();
		strcpy(buffer, text_char.data());
		send(client, buffer, BUFFER, 0);
		
		recv(client, buffer, BUFFER, 0);
	}
}

void Client::read_message()
{
	qDebug() << "hello";
	//read_msg.start();
}

void Client::disconnect()
{
	strcpy(buffer, "[INFO] Close chat");
	send(client, buffer, BUFFER, 0);
}
