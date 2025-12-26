#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p =malloc(sizeof(int));
	 *p = 10;

	 free(p);
	
	printf("%p\n",p);






}

