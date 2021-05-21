#include "thread_chat.h"
#include "client.h"

thread_chat::thread_chat()
{
	
}

void thread_chat::run()
{
	Client client_f;
	client_f.read_message();
}
