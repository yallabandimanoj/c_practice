#include<stdio.h>

int main()
{

int n,i,flag = 1;
printf("enter a number:");
scanf("%d",&n);

if(n>1)
{
	
	for(i=2;i<=n/2;i++)
	{
	if(n%i == 0)
	{
	flag = 0;
	break;
	}
	}
	if(flag == 1)
	
		printf("prime number\n");
		else
		printf("not a prime number:\n");
		return 0;
	}
}
