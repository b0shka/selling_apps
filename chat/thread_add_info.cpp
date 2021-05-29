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
	QString all_messages = database.get_correspondence(g_user_name, m_login_dev);
	emit add_all_msg(all_messages);
	QString new_messages = database.get_new_messages(g_user_name, m_login_dev);
	emit add_new_msg(new_messages);
}

void thread_add_info::setLogin_dev(QString login_dev)
{
	if (m_login_dev == login_dev)
		return;
	
	m_login_dev = login_dev;
	emit login_devChanged(m_login_dev);
}
