#ifndef THREAD_NEW_MESSAGES_H
#define THREAD_NEW_MESSAGES_H

#include <QObject>
#include <QDebug>
#include <QString>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"

class thread_new_messages : public QObject
{
	Q_OBJECT
	
public:
	explicit thread_new_messages(QObject *parent = nullptr);
	
signals:
	void finished();
	void add_count(QString message);

public slots:
	void run();
	
private:
	sql_database database;
};

#endif // THREAD_NEW_MESSAGES_H
