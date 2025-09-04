#include<stdio.h>
int main()
{
	int i, n, bit[7];
	printf("enter the number\n");
	scanf("%d",&n);
	for(int i=0;i<=7;i++)
	{
	  	bit[i] = n&1;
		n = n>>1;
	}
	for(int i=7;i>=0;i--)
	

	printf("%d", bit[i]);

	printf("\n");

}
