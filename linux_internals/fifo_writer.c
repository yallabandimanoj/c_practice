#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	int fd;
	char *fifo = "myfifo";

	fd = open(fifo,O_WRONLY);
	write(fd, "hello from writer!",19);
	close(fd);
	return 0;
}



