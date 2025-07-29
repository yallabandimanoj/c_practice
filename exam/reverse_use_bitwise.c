#include<stdio.h>


// here iam print i/p in reverse manner like 78 56 34 12
int main()
{
	int n = 0x12345678;
	int i;
	char a[4];
	for(int i=0;i<4;i++)
	{
		a[i]=(n>>(8*i));
		printf("a[%d]:%x\n",i,a[i]);
	}
	//printf("\n");
}


