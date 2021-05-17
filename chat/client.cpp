#include "client.h"

void Client::conect_server()
{
	client = socket(AF_INET, SOCK_STREAM, 0);
	if (client < 0)
	{
		qDebug() << "[ERROR] Socket can't a create";
		return;
	}

	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, IP, &hint.sin_addr);

	connect(client, (sockaddr*)&hint, sizeof(hint));

	recv(client, buffer, BUFFER, 0);
	qDebug() << "[INFO] Connection success";
}

void Client::send_mesage(QString message)
{
	if (message != "")
	{
		QByteArray text_char = message.toLatin1();
		strcpy(buffer, text_char.data());
		send(client, buffer, BUFFER, 0);
		
		recv(client, buffer, BUFFER, 0);
	}
}

void Client::disconnect_server()
{
	QString message = "[INFO] Client disconnect";
	QByteArray text_char = message.toLatin1();
	strcpy(buffer, text_char.data());
	send(client, buffer, BUFFER, 0);
}
