#include "client.h"

void Client::conect_server()
{
	client = socket(AF_INET, SOCK_STREAM, 0);

	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, IP, &hint.sin_addr);

	result_connect = connect(client, (sockaddr*)&hint, sizeof(hint));
	if (result_connect == -1)
		return;
	else
	{
		strcpy(buffer, g_user_name.toLatin1());
		send(client, buffer, BUFFER, 0);
		
		recv(client, buffer, BUFFER, 0);
		//qDebug() << QString(buffer).split(";")[0].toLatin1().data();
		database.add_client_id(QString(buffer).toInt(), g_user_name);
		
		g_status_online = 1;
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
