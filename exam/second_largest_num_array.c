#include<stdio.h>

int main()
{
	int arr[] = {15,4,30,20,1};
	
	int n = sizeof(arr)/sizeof(arr[0]);

	int temp,i,j;

	for(i =0; i < n-1;i++)
	{
		for(j = 0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =temp;
			}
		}
	}
	printf("second largest element :%d\n",arr[n-2]);
	return 0;
}

