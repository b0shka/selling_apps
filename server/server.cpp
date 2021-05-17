#include "server.h"

void Server::start_server()
{
	client = socket(AF_INET, SOCK_STREAM, 0);
	if (client < 0)
	{
		cout << "[ERROR] Socket can't a create" << endl;
		return;
	}

	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, IP, &hint.sin_addr);

	int res = bind(client, (sockaddr*)&hint, sizeof(hint));
	if (res < 0)
	{
		cout << "[ERROR] Can't bind to IP/PORT" << endl;
		return;
	}

	if (listen(client, SOMAXCONN) < 0)
	{
		cout << "[ERROR] can't listen" << endl;
		return;
	}

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
		server = accept(client, (sockaddr*)&hint, &size);
		if (server < 0)
		{
			cout << "[ERROR] Client can't connect" << endl;
			return;
		}

		close(client);

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

		if (result)
			cout << "[INFO] " << host << " connected on " << svc << endl;
		else
		{
			inet_ntop(AF_INET, &hint.sin_addr, host, NI_MAXHOST);
			cout << "[INFO] " << host << " connected on " << ntohs(hint.sin_port) << endl;
		}

		strcpy(buffer, "[INFO] Server connect\n");
		send(server, buffer, BUFFER, 0);

		//message_handler();
		thread message_hand(&Server::message_handler, this);
		message_hand.join();
	}
}

void Server::message_handler()
{
	while (server > 0)
	{
		int bytes = recv(server, buffer, BUFFER, 0);
		/*if (bytes == -1)
		{
			cout << "[INFO] Connection issue" << endl;
			break;
		}
		if (bytes == 0)
		{
			cout << "[INFO] Client disconnect" << endl;
			break;
		}*/
		
		string message = string(buffer, 0, bytes);
		if (message.size() > 0)
		{
			cout << "Client: " << message << endl;
			send(server, buffer, bytes, 0);
		}
	}
	close(server);
}