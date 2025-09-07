#include<stdio.h>
int main()
{
	int n;
	int ones=0,zeros=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n&1)
		{
			ones++;
		}
		else
		{
			zeros++;

		}
		n = n>>1;
	}
printf("number of setbits =%d\n",ones);
printf("number of resetbits =%d\n",zeros);
}

