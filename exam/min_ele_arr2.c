#include<stdio.h>
int main()
{
	int a[5]={22,79,66,35,20};
	int min =a[0];
	for(int i=1;i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("mini value is %d\n",min);
}

