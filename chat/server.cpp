#include "server.h"

int main()
{
	client = socket(AF_INET, SOCK_STREAM, 0);
	if (client < 0)
	{
		cout << "[ERROR] Socket can't a create" << endl;
		return -1;
	}

	hint.sin_family = AF_INET;
	hint.sin_port = htons(PORT);
	inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

	int res = bind(client, (sockaddr*)&hint, sizeof(hint));
	if (res < 0)
	{
		cout << "[ERROR] Can't bind to IP/PORT" << endl;
		return -2;
	}

	cout << "[INFO] Server started" << endl;
	connect_handler();
	//thread connect(connect_handler);
}

int connect_handler()
{
	if (listen(client, SOMAXCONN) < 0)
	{
		cout << "[ERROR] can't listen" << endl;
		return -3;
	}

	socklen_t size = sizeof(hint);
	char host[NI_MAXHOST];
	char svc[NI_MAXSERV];

	server = accept(client, (sockaddr*)&hint, &size);
	if (server < 0)
	{
		cout << "[ERROR] Client can't connect" << endl;
		return -4;
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

	message_handler();

	return 0;
}

int message_handler()
{
	while (server > 0)
	{
		string message;
		int bytes = recv(server, buffer, BUFFER, 0);
		if (bytes == -1)
		{
			cout << "[INFO] Connection issue" << endl;
			break;
		}
		if (bytes == 0)
		{
			cout << "[INFO] Client disconnect" << endl;
			break;
		}

		message = string(buffer, 0, bytes);
		cout << "Client: " << message << endl;
		send(server, buffer, bytes, 0);
	}

	close(server);

	return 0;
}