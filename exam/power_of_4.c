#include<stdio.h>
int main()
{
	int n=0;
	printf("enter a number to check for multiple of 4:\n");
	scanf("%d",n);
	if((n&3) == 0)
	{
		printf("%d is multiple of 4\n");
	}
	else
	{
		printf("%d is power of 4\n");
	}
}
