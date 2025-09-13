#include<stdio.h>
int main()
{
	int arr[10] = {5,8,12,3,7,15,20,1,9,30};
	int n = 10;
	int key,found = 0;
	printf("neter the num to search:");
	scanf("%d",&key);

	for(int i=0;i<n;i++)
	{
		if(arr[i] == key)
		{
		printf("number %d found at position %d\n",key,i);
		found = 1;
		break;
		}
	}
	if(!found)
        {
		printf("number %d not found in the array\n ",key);
	}
	return 0;
}


