#include<stdio.h>

int fact(int n)
{
	int i, f=1;
	for(i =1;i<=n;i++)
		f*=i;
	return f;
}

int nCr(int n,int r)
{

	return fact(n)/(fact(r) * fact(n-r));
}

int main()
{
	int n,i,j;
	printf("enter the nuber of rows\n");
	scanf("%d",&n);

	for(i = 0;i < n;i++)
	{
		for(j =0;j< n-i-1;j++)
		
			printf(" ");

			for(j=0;j<=i;j++)
			
				printf("%4d",nCr(i,j));
				printf("\n");
			}
			return 0;
		
		}



