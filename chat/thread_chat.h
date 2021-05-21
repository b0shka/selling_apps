#ifndef THREAD_CHAT_H
#define THREAD_CHAT_H

#include <QThread>
#include <QDebug>

class thread_chat : public QThread
{
public:
	explicit thread_chat();
	void run();
};

#endif // THREAD_CHAT_H
