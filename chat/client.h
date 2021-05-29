#ifndef CLIENT_H
#define CLIENT_H

#include <QDebug>
#include <QThread>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

#define PORT 1111
#define IP "127.0.0.1"
#define BUFFER 1024

class Client
{
public:
	void conect_server();
	//void send_message(QString message, QString login);
	void disconnect();
	int client;
	
private:
	sockaddr_in hint;
    char buffer[BUFFER];
	sql_database database;
};

#endif // CLIENT_H
