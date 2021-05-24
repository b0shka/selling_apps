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

		//string message_start = "[INFO] Server connect;" + to_string(client);
		strcpy(buffer, to_string(client).c_str());
		send(client, buffer, BUFFER, 0);

		thread message_hand(&Server::message_handler, this, client);
		message_hand.detach();
	}
}

void Server::message_handler(int client_socket)
{
	while (true)
	{
		int bytes = recv(client_socket, buffer, BUFFER, 0);
		string message = string(buffer, 0, bytes-1);

		if (bytes <= 0)
		{
			cout << "[INFO] Client disconnect" << endl;
			break;
		}
		else if (message.find(";[INFO] Close chat") != string::npos)
		{
			string user_close = "";

			for (int i = 0; i < message.size(); i++)
			{
				if (message[i] != ';')
					user_close += message[i];
				else
					break;
			}

			cout << "[" + user_close + "] Client disconnect" << endl;
			break;
		}

		if (message.size() > 0)
		{
			string id_client = "";

			for (int i = 0; i < message.size(); i++)
			{
				if (message[i] != ';')
					id_client += message[i];
				else
					break;
			}

			for (int i = 0; i < id_client.size(); i++)
				message.erase(i, 1);
			message.erase(message.find(';'), 1);

			cout << "Client: " << message << endl;
			strcpy(buffer, message.c_str());
			send(stoi(id_client), buffer, bytes, 0);
		}
	}
	close(client_socket);
}