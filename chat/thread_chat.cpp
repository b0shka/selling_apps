#include "thread_chat.h"
#include "chat.h"

thread_chat::thread_chat(QObject *parent) : QObject(parent)
{
	
}

int thread_chat::id_server() const
{
	return m_id_server;
}

void thread_chat::run()
{
	while (g_status_online == 1)
	{
		recv(m_id_server, buffer, BUFFER, 0);
		if (QString(buffer).size() != 0)
		{
			emit add_msg(QString(buffer));
		}
	}
	emit finished();
}

void thread_chat::setId_server(int id_server)
{
	if (m_id_server == id_server)
		return;
	
	m_id_server = id_server;
	emit id_serverChanged(m_id_server);
}
