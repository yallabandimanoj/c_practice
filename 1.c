#include<stdio.h>
int main()
{
	int n,num =1;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		if(i%2 != 0)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d ",num);
				num++;
			}
		}
		else
		{
			int temp = num+n-1;
			for(int j = 1;j<=n;j++)
			{
				printf("%d ",temp--);
			}
			num= num+n;
		}
		printf("\n");
	}
	return 0;
}




