#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QDebug>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <chrono>
#include <QThread>

#define PORT 7777
#define IP "127.0.0.1"
#define BUFFER 1024

class Client
{
public:
	void conect_server();
	void send_message(QString message);
	void read_message();
	
private:
	int client;
	sockaddr_in hint;
    char buffer[BUFFER];
};

#endif // CLIENT_H
