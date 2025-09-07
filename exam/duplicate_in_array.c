#include<stdio.h>
int main()
{
	int a[] = {1,2,3,2,5}, n=5;
	printf("enter the elements\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				printf("%d\n",a[i]);
				//break;
			}
		}
	}

	return 0;
}


