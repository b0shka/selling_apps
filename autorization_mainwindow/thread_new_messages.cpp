#include "thread_new_messages.h"

thread_new_messages::thread_new_messages(QObject *parent) : QObject(parent)
{
	
}

void thread_new_messages::run()
{
	int main_count;
	while (g_status_autorization == 1)
	{
		int count_messages = database.check_new_messages(g_user_name);
		if (main_count != count_messages)
		{
			emit add_count(QString::number(count_messages));
			main_count = count_messages;
		}
	}
	emit finished();
}
