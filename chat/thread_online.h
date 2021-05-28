#ifndef THREAD_ONLINE_H
#define THREAD_ONLINE_H

#include <QObject>
#include <QDebug>
#include <QString>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

class thread_online : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString login_dev READ login_dev WRITE setLogin_dev NOTIFY login_devChanged)
	
public:
	explicit thread_online(QObject *parent = nullptr);
	QString login_dev() const;
	
signals:
	void finished();
	void add_online(int message);
	void login_devChanged(QString login_dev);
	
public slots:
	void run();
	void setLogin_dev(QString login_dev);
	
private:
	sql_database database;
	QString m_login_dev;
};

#endif // THREAD_ONLINE_H
