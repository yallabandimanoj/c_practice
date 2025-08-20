#include<stdio.h>
int main()
{
	int n, i,j,swap;
	printf("enter the nuber of elements\n");
	scanf("%d",&n);
        
	int array[n];
	printf("enter %d  the integer\n",n);
        for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
	}

printf("sorted in ascending order\n");
for(i=0;i<n;i++)

	printf("%d\n",array[i]);

	return 0;
}


