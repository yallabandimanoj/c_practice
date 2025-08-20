#include<stdio.h>

int main()
{
	int arr[5] = {5,3,1,6,4},  temp;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] =temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

return 0;
}



