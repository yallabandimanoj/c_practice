#include<stdio.h>
int rev(int arr[],int n)
{
	
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}
int main()

{
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);

	rev(arr,n);



return 0;
}
