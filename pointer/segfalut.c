#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = NULL ;
	ptr = malloc(sizeof(int));

        if(ptr !=NULL)
	{

	*ptr = 10;
	printf("%d\n",*ptr);
	}
	//printf("Done\n");
	return 0;
}

