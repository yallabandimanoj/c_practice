#include <stdio.h>
void ascending(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int arr[]={1,6,4,3,8,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	ascending(arr,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
