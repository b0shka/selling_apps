#include "send_message.h"
#include "client.h"

send_message::send_message(QObject *parent) : QObject(parent)
{
	
}

QString send_message::login_dev() const
{
	return m_login_dev;
}

int send_message::id_server() const
{
	return m_id_server;
}

QString send_message::message() const
{
	return m_message;
}

void send_message::run()
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

void send_message::sending()
{
	Client client;
	while (g_status_online == 1)
	{
		if (m_message != "")
		{
			QTime time = QTime::currentTime();
			msg = "(" + time.toString("hh:mm") + ") " + m_message;
			emit add_send_msg(msg);
			
			int status_online = database.get_status_online(m_login_dev);
			if (status_online == 1)
			{
				int client_id = database.get_id_socket_user(m_login_dev);
				send_text = QString::number(client_id) + ";" + msg;
				QByteArray text_char = send_text.toLatin1();
				strcpy(buffer, text_char.data());
				send(m_id_server, buffer, BUFFER, 0);
				database.add_to_chat(m_login_dev, g_user_name, "0" + msg);
			}
			else
				database.add_new_message_to_database(g_user_name, m_login_dev, "0" + msg);
			
			database.add_to_chat(g_user_name, m_login_dev, "1" + msg);
			m_message = "";
		}
	}
	emit finished();
}

void send_message::setLogin_dev(QString login_dev)
{
	if (m_login_dev == login_dev)
		return;
	
	m_login_dev = login_dev;
	emit login_devChanged(m_login_dev);
}


void send_message::setId_server(int id_server)
{
	if (m_id_server == id_server)
		return;
	
	m_id_server = id_server;
	emit id_serverChanged(m_id_server);
}

void send_message::setMessage(QString message)
{
	if (m_message == message)
		return;
	
	m_message = message;
	emit messageChanged(m_message);
}
