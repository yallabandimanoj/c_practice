#include<stdio.h>
// print reverse the no using bitwise and array
int main()
{
	int n,i,arr[4];
	n = 0x1234;
	arr[0]=(n&0x000f);
	arr[1]=(n&0x00f0)>>4;
	arr[2]=(n&0x0f00)>>8;
	arr[3]=(n&0xf000)>>12;
	for(i=0;i<4;i++)
	{
		printf("%x",arr[i]);
	}
}


