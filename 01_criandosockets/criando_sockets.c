#include <stdio.h>
#include <sys/socket.h>

int main()
{
    int primeirosocket;
    primeirosocket = socket(PF_UNIX,SOCK_STREAM,0);
	printf("Socket: %d\n",primeirosocket);
}
