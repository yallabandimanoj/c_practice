#include<stdio.h>

int main()
{
	int n,i,j;
	int num=1;
	printf("enter the size:\n");
	scanf("%d ",&n);
         

	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d ",num++);
			}
		}
		else 
		{
			int temp =num+n-1;
			for(int j=1;j<=n;j++)
			{
				printf("%d ",temp--);
			}
			num = num+n;

		}
			printf("\n");

		}
		return 0;
	}


