#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string>
#include <string.h>
#include <thread>
#include <chrono>

#define PORT 10000
#define IP "127.0.0.1"
#define BUFFER 1024

using namespace std;

class Server
{
public:
    void start_server();
    void connect_handler();
    void message_handler();

private:
    int client, server;
    sockaddr_in hint;
    char buffer[BUFFER];
};

#endif // SERVER_H