#include<stdio.h>
int sum( arr[], n)
{
	int res = 0;
	for(int i=0;i<n;i++)
	{
	res += arr[i];
	}
	return res;

}


int main()
{

int arr[] ={100,200,300,400};
int n = sizeof(arr)/sizeof(arr[0]);
int add =sum(arr,n);

printf("%d\n",add);

return 0;

}
