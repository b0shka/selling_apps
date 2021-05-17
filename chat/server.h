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

#define PORT 1111
#define BUFFER 1024

using namespace std;

int main();
int connect_handler();
int message_handler();

int client, server;
sockaddr_in hint;
char buffer[BUFFER];

#endif // SERVER_H