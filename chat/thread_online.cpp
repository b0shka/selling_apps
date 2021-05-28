#include "thread_online.h"

thread_online::thread_online(QObject *parent) : QObject(parent)
{
	
}

QString thread_online::login_dev() const
{
	return m_login_dev;
}

void thread_online::run()
{
	while (g_status_online == 1)
	{
		int status_online = database.get_status_online(m_login_dev);
		emit add_online(status_online);
	}
	emit finished();
}

void thread_online::setLogin_dev(QString login_dev)
{
	if (m_login_dev == login_dev)
		return;
	
	m_login_dev = login_dev;
	emit login_devChanged(m_login_dev);
}
