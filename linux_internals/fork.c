#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid =fork();
	{
		if(pid<0)
		{
			perror("fork creation failed\n");
		}
		else if(pid ==0)
		{
			printf("child process :pid=%d\n",getpid());
		}
		else{
			printf("parent process pid= %d child pid=%d\n",getpid(),pid);
		}
		return 0;
	}
}
