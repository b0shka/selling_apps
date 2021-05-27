#ifndef THREAD_ADD_INFO_H
#define THREAD_ADD_INFO_H

#include <QThread>
#include <QDebug>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

class thread_add_info : public QThread
{
public:
	explicit thread_add_info();
	void run();
	
private:
	sql_database database;
};

#endif // THREAD_ADD_INFO_H
