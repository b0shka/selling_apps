#ifndef THREAD_CHAT_H
#define THREAD_CHAT_H

#include <QObject>
#include <QDebug>
#include <QString>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

#define BUFFER 1024

class thread_chat : public QObject
{
	Q_OBJECT
	
public:
	explicit thread_chat(QObject *parent = nullptr);

signals:
	void finished();
	void add_msg(QString message);

public slots:
	void run();
	
private:
	char buffer[BUFFER];
	sql_database database;
};

#endif // THREAD_CHAT_H
