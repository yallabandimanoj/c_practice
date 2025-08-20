#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the number of elements\n");
        scanf("%d",&n);

	int arr[n];
	printf("enter %d integers\n",n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
//	while(j>0 && arr[j-1]>arr[j])
	for(j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		{
		temp = arr[i];
		arr[i] =arr[j];
		arr[j] = temp;
	//	j--;
	}
	
	}
}
	printf("sorted list in aascending order\n");
	for(int i=0;i<n;i++)
{
	printf("%d\n",arr[i]);


}
return 0;
}
