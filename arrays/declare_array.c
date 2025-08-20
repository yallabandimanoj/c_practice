#include<stdio.h>
int main()
{
	char arr[5]={10,20,39},n;
	n =sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;

}

