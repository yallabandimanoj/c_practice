#include<stdio.h>
int main()
{
     int sum = 0,n;

	printf("enter the number \n");
	scanf("%d",&n);

	for(int i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			sum = sum+i;
		}
		}
		if(n == sum)
		{
			printf("its is a perfect number\n");
                  }
		else
		{

			printf("its not a prfect number \n");
		}
	}


