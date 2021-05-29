#ifndef THREAD_SEND_H
#define THREAD_SEND_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QTime>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

#define BUFFER 1024

class thread_send : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString login_dev READ login_dev WRITE setLogin_dev NOTIFY login_devChanged)
	Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
	Q_PROPERTY(int id_server READ id_server WRITE setId_server NOTIFY id_serverChanged)
	
public:
	explicit thread_send(QObject *parent = nullptr);
	QString login_dev() const;
	QString message() const;
	int id_server() const;
	
signals:
	void finished();
	void add_message(QString message);
	void login_devChanged(QString login_dev);
	void messageChanged(QString message);
	
	void id_serverChanged(int id_server);
	
public slots:
	void run();
	void setLogin_dev(QString login_dev);
	void setMessage(QString message);
	void setId_server(int id_server);
	
private:
	char buffer[BUFFER];
	sql_database database;
	QString m_login_dev;
	QString m_message = "";
	QString msg;
	int m_id_server;
};

#endif // THREAD_SEND_H
