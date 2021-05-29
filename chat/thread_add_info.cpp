#include "thread_add_info.h"

thread_add_info::thread_add_info(QObject *parent) : QObject(parent)
{
	
}

QString thread_add_info::login_dev() const
{
	return m_login_dev;
}

void thread_add_info::run()
{
	database.change_status_online(g_user_name);
	database.start_dialog(g_user_name, m_login_dev);
}

void thread_add_info::setLogin_dev(QString login_dev)
{
	if (m_login_dev == login_dev)
		return;
	
	m_login_dev = login_dev;
	emit login_devChanged(m_login_dev);
}
