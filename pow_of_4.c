#include<stdio.h>
int main()
{
	int n;
	int original;
	int ispowerof4 = 0;
	printf("enter the number\n");
	scanf("%d",&n);

	original = n;

	if(n > 0)
	{
		while(n%4 == 0)
		{
			n=n/4;
		}
		if(n == 1)
		{
			ispowerof4 = 1;
		}
	}
	if(ispowerof4)
	{
		printf("%d,ispowerof4\n",original);
	}
	else
	{
	
		printf("%d, not a ispowerof4\n",original);
	}
}


