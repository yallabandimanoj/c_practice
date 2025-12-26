#include<stdio.h>

int main()
{
	int n,flag1,flag2;

	printf("enter the value of n:");
	scanf("%d",&n);

	printf("twin prime numbers are :\n");

	for(int i = 2;i<=n-2;i++)
	{
		flag1 = 1;
		flag2 = 1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				flag1 = 0;
				break;
			}
		}
		for(int k=2;k<=(i+2)/2;k++)
		{
			if((i+2)%k == 0)
			{
				flag2=0;
				break;
			}
		}
		if(flag1 == 1 && flag2 == 1)
		{
			printf("(%d,%d)\n",i,i+2);
		}
	}
		return 0;
}



