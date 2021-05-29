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
	Q_PROPERTY(int id_server READ id_server WRITE setId_server NOTIFY id_serverChanged)
	
public:
	explicit thread_chat(QObject *parent = nullptr);
	int id_server() const;
	
signals:
	void finished();
	void add_msg(QString message);
	void id_serverChanged(int id_server);
	
public slots:
	void run();
	void setId_server(int id_server);
	
private:
	char buffer[BUFFER];
	sql_database database;
	int m_id_server;
};

#endif // THREAD_CHAT_H
