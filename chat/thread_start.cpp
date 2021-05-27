#include "thread_start.h"
#include "chat.h"

thread_start::thread_start(QObject *parent) : QObject(parent)
{
	
}

void thread_start::run()
{
	int client_socket = database.get_id_server(g_user_name);
	while (g_status_online == 1)
	{
		recv(client_socket, buffer, BUFFER, 0);
		if (QString(buffer).size() != 0)
		{
			qDebug() << QString(buffer);
			emit add_msg(QString(buffer));
		}
	}
	emit finished();
}
