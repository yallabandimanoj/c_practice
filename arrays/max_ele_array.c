#include<stdio.h>
int main()
{
	int arr[]={10,44 ,55, 89,77,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max=0;
	for(int i=0;i<n;i++)
	{  	
		if(max < arr[i])
		max = arr[i];
	}

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
}
printf("\n");
printf("max ele in array:%d\n",max);
}


