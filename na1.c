#include<stdio.h>

int main()
{
	int a,b,num,start,diff;
	start=2;

	for(a=0;a<5;a++)
	{
		num=start;
		diff=1;
		for(b=0;b<=a;b++)
		{
			printf("%d ",num);
                 	num-=diff;
                     	diff++;
                 }
		printf("\n");
		start+=(6-a);
	}
	return 0;
}



