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
#include <algorithm>

#define PORT 1111
#define IP "127.0.0.1"
#define BUFFER 1024

using namespace std;
using namespace chrono;

class Server
{
public:
    void start_server();
    void connect_handler();
    void message_handler(int client_socket);

private:
    int client, server;
    sockaddr_in hint;
    char buffer[BUFFER];
};

#endif // SERVER_H