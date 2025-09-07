#include<stdio.h>

int main()
{
	int n,i;

	int a=0,b=1,c;

	printf("enter the number of terms\n");

	scanf("%d",&n);

	printf("fibb series\n");

	for(i =1;i<=n;i++)
	{
		printf("%d\t",a);

		c  = a+b;
		a  = b;
		b = c;
	}
	printf("\n");
	return 0;
}

		   


