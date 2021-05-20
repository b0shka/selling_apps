#ifndef THREAD_CHAT_H
#define THREAD_CHAT_H

#include <QThread>
#include <QDebug>
#include "client.h"

class thread_chat : public QThread
{
public:
	explicit thread_chat();
	void run();

private:
	Client client;
};

#endif // THREAD_CHAT_H
