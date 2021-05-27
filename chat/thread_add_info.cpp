#include "thread_add_info.h"
#include "client.h"

thread_add_info::thread_add_info()
{
	
}

void thread_add_info::run()
{
	Client client;
	//client.conect_server();	
	database.change_status_online(g_user_name);
}
