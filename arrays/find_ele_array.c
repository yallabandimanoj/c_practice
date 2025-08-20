#include<stdio.h>
int main()
{
	int arr[5]={10, 29,30,40,100};
	for(int i=0;i<5;i++)
	{

		if(arr[i]==40)
			printf("%d\n",i);
	}
	return 0;
}
