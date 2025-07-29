// find the min val ina n array
#include<stdio.h>
int main()
{
	int n,i,min,arr[50];
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the integer\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if (arr[i]< min){
			min = arr[i];
		}
	}
	printf("the minimum element array is %d\n",min);
}



