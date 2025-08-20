#include<stdio.h>

int main()
{
	int i=0x1234;
	char *p;
	p = (char*)&i;

	if(*p)
	
		printf("little endian:%x\n",i);
		else
		printf("big endian:%x\n",i);
	

}
