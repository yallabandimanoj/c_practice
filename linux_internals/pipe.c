#include<stdio.h>
#include<string.h>
#include<unistd.h>


int main()
{
	int fd[2];
	char buffer[50];
	pid_t pid;

	if(pipe(fd)==-1)
	{
		perror("pipe failed\n");
		return 1;
	}




pid= fork();

// fd[0]=read
// fd[1]=write
if(pid < 0)

	perror("fork failed");
	return 1;


if(pid == 0)
{     //child process read from pipe
	close(fd[1]);// close write end
	read(fd[0],buffer, sizeof(buffer));
	printf("child received :%s\n",buffer);
	close(fd[0]);;
}else{
	//parent process write

	close(fd[0]);// close read end
	char message[] = "hello from parent!)";
	write(fd[1],message,strlen(message)+1);
	
	close(fd[1]);
}
return 0;
}



