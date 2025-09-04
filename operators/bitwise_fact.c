#include<stdio.h>
int mul(int n ,int fact)
{
	int result = 0;
	while(n>0)
	{
		if(n&1)
		{
		result += fact;
		}
		n >>= 1;
		fact <<= 1;
	}
	return result;
}
int main()
{
 int n, fact =1;
 printf("enter the number\n");

 		
scanf("%d",&n);
for (int i=2;i<=n;i++)
	
 fact = mul(i,fact);
printf("%d\n",fact);
}


