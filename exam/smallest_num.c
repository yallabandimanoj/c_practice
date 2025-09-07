#include<stdio.h>

int main()
{
	int i,n,small;
	printf("enter the number \n");
	scanf("%d",&n);

	int arr[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 
	small = arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i]< small)
		{
		small = arr[i];
		
	}
		printf("smallest number =%d\n",small);
		return 0;
	}
}

