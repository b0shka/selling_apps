#ifndef THREAD_START_H
#define THREAD_START_H

#include <QObject>
#include <QDebug>
#include <QString>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

#define BUFFER 1024

class thread_start : public QObject
{
	Q_OBJECT
	
public:
	explicit thread_start(QObject *parent = nullptr);

signals:
	void finished();
	void add_msg(QString message);

public slots:
	void run();
	
private:
	char buffer[BUFFER];
	sql_database database;
};

#endif // THREAD_START_H
