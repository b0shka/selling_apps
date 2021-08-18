#ifndef SEND_MESSAGE_H
#define SEND_MESSAGE_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QTime>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

#define BUFFER 1024

class thread_in_chat : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString login_dev READ login_dev WRITE setLogin_dev NOTIFY login_devChanged)
	Q_PROPERTY(int id_server READ id_server WRITE setId_server NOTIFY id_serverChanged)
	Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
	
public:
	explicit thread_in_chat(QObject *parent = nullptr);
	QString login_dev() const;
	int id_server() const;
	QString message() const;
	
signals:
	void finished();
	void add_msg(QString message);
	void add_send_msg(QString message);
	void add_all_msg(QString message);
	void add_new_msg(QString message);
	void add_online(int message);
	void login_devChanged(QString login_dev);
	void id_serverChanged(int id_server);
	void messageChanged(QString message);

public slots:
	void run();
	void sending();
	void add_ingo();
	void check_online();
	void setLogin_dev(QString login_dev);
	void setId_server(int id_server);
	void setMessage(QString message);
	
private:
	char buffer[BUFFER];
	sql_database database;
	QString m_login_dev, send_text;
	int m_id_server;
	QString m_message = "";
};

#endif // SEND_MESSAGE_H
