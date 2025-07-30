#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int max =a[0];
	for(int i=0;i<5;i++)
	
	
		if(a[i]!=max)
		{
			max = a[i];
		}
		printf("max value is: %d\n",max);
	
	}




