#include "server.h"

void Server::start_server()
{
	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, IP, &hint.sin_addr);

	server = socket(AF_INET, SOCK_STREAM, 0);
	bind(server, (sockaddr*)&hint, sizeof(hint));
	listen(server, 1);

	cout << "[INFO] Server started" << endl;
	connect_handler();
}

void Server::connect_handler()
{
	socklen_t size = sizeof(hint);
	char host[NI_MAXHOST];
	char svc[NI_MAXSERV];

	while (true)
	{
		client = accept(server, (sockaddr*)&hint, &size);
	
		int count = 0;
		for (int i = 0; i < list_client.size(); i++)
		{
			if (list_client[i] == client)
				count++;
		}
		if (list_client.size() == 0 || count == 0)
		{
			list_client.push_back(client);

			memset(host, 0, NI_MAXHOST);
			memset(svc, 0, NI_MAXSERV);
			memset(buffer, 0, BUFFER);

			int result = getnameinfo((sockaddr*)&hint,
									sizeof(hint),
									host,
									NI_MAXHOST,
									svc,
									NI_MAXSERV,
									0);

			recv(client, buffer, BUFFER, 0);
			if (result)
				cout << "[" << buffer << "] " << host << " connected on " << svc << endl;
			else
			{
				inet_ntop(AF_INET, &hint.sin_addr, host, NI_MAXHOST);
				cout << "[" << buffer << "] " << host << " connected on " << ntohs(hint.sin_port) << endl;
			}

			string message_start = "[INFO] Server connect;" + to_string(client);
			strcpy(buffer, message_start.c_str());
			send(client, buffer, BUFFER, 0);

			thread message_hand(&Server::message_handler, this, client);
			message_hand.detach();
		}
	}
}

void Server::message_handler(int client_socket)
{
	while (true)
	{
		int bytes = recv(client_socket, buffer, BUFFER, 0);
		string message = string(buffer, 0, bytes-1);
		if (bytes <= 0 || message == "[INFO] Close chat")
		{
			cout << "[INFO] Client disconnect" << endl;
			break;
		}

		if (message.size() > 0)
		{
			cout << "Client: " << message << endl;
			for (int i : list_client)
			{
				send(i, buffer, bytes, 0);
			}
		}
	}
	close(client_socket);
}