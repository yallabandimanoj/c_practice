#include<stdio.h>
int main()
{
	int arr1[3] = {1,3,4,};
	int arr2[6] = {2,4,5,9,7,6};

	int arr3[9],n1=3,n2=6;

	
	for(int i =  0;i < n1;i++)
	{
	arr3[i] = arr1[i];
	}
	for(int j=0;j< n2;j++)
	{
		arr3[j+n1] = arr2[j];
	}
	for(int i =0;i<9;i++){
	for(int j =i+1;j<9;j++){
		if(arr3[i]>arr3[j]){
		arr3[i] = arr3[i]^arr3[j];
		arr3[j] = arr3[i]^arr3[j];
		arr3[i] = arr3[i]^arr3[j];


	}
	}
	}printf("merged and sorted array:");
	for(int i =0;i < 9;i++){
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}

	
