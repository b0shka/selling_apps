#include "thread_in_chat.h"
#include "client.h"

thread_in_chat::thread_in_chat(QObject *parent) : QObject(parent)
{
	
}

QString thread_in_chat::login_dev() const
{
	return m_login_dev;
}

int thread_in_chat::id_server() const
{
	return m_id_server;
}

QString thread_in_chat::message() const
{
	return m_message;
}

void thread_in_chat::run()
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

void thread_in_chat::sending()
{
	Client client;
	while (g_status_online == 1)
	{
		if (m_message != "")
		{
			QTime time = QTime::currentTime();
			m_message = "(" + time.toString("hh:mm") + ") " + m_message;
			emit add_send_msg(m_message);
			
			int status_online = database.get_status_online(m_login_dev);
			if (status_online == 1)
			{
				int client_id = database.get_id_socket_user(m_login_dev);
				send_text = QString::number(client_id) + ";" + m_message;
				QByteArray text_char = send_text.toLatin1();
				strcpy(buffer, text_char.data());
				send(m_id_server, buffer, BUFFER, 0);
				database.add_to_chat(m_login_dev, g_user_name, "0" + m_message);
			}
			else
				database.add_new_message_to_database(g_user_name, m_login_dev, "0" + m_message);
			
			database.add_to_chat(g_user_name, m_login_dev, "1" + m_message);
			m_message = "";
		}
	}
	emit finished();
}

void thread_in_chat::add_ingo()
{
	database.change_status_online(g_user_name);
	database.start_dialog(g_user_name, m_login_dev);
	QString all_messages = database.get_correspondence(g_user_name, m_login_dev);
	emit add_all_msg(all_messages);
	QString new_messages = database.get_new_messages(g_user_name, m_login_dev);
	emit add_new_msg(new_messages);
}

void thread_in_chat::check_online()
{
	while (g_status_online == 1)
	{
		int status_online = database.get_status_online(m_login_dev);
		emit add_online(status_online);
	}
	emit finished();
}

void thread_in_chat::setLogin_dev(QString login_dev)
{
	if (m_login_dev == login_dev)
		return;
	
	m_login_dev = login_dev;
	emit login_devChanged(m_login_dev);
}


void thread_in_chat::setId_server(int id_server)
{
	if (m_id_server == id_server)
		return;
	
	m_id_server = id_server;
	emit id_serverChanged(m_id_server);
}

void thread_in_chat::setMessage(QString message)
{
	if (m_message == message)
		return;
	
	m_message = message;
	emit messageChanged(m_message);
}
