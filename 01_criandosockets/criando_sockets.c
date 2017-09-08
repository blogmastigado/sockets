#include <stdio.h>
#include <sys/socket.h>

int main()
{
    int socket_fd;
    socket_fd = socket(PF_UNIX,SOCK_STREAM,0);
	printf("Socket: %d\n",socket_fd);
}
