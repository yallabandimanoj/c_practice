#include<stdio.h>

int main()
{
	int i=3;
	char *p;
	p = (char*)&i;

	if(*p)
	
		printf("little endian");
		else
		printf("big endian");
	

}
