#ifndef THREAD_ADD_INFO_H
#define THREAD_ADD_INFO_H

#include <QObject>
#include <QDebug>
#include <QString>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

class thread_add_info : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString login_dev READ login_dev WRITE setLogin_dev NOTIFY login_devChanged)
	
public:
	explicit thread_add_info(QObject *parent = nullptr);
	QString login_dev() const;
	
signals:
	void finished();
	void add_info(QString message);
	void login_devChanged(QString login_dev);
	
public slots:
	void run();
	void setLogin_dev(QString login_dev);
	
private:
	sql_database database;
	QString m_login_dev;
};

#endif // THREAD_ADD_INFO_H
