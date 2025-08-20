#include<stdio.h>
 void rev(int arr[],int n)
{
int l=0,m=n-1;
while(l<m)
{

int temp = arr[l];
     arr[l]=arr[m];
     arr[m]=temp;
l++;
m--;

}
}
int main()
{
	int arr[] ={10,20,30,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);

	rev(arr,n);


	for(int i = 0; i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}


