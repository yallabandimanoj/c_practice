#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *string = malloc(8*(sizeof(int)));
		printf("hello mememory leak\n");
		free(string);
}


