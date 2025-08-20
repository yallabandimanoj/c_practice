#include<stdio.h>
int main()
{
	int n,a,b,c,d,x;
	printf("enter the number\n");
	scanf("%x",&n);
/*	a = (n & 0xf000) >> 12;
        b = (n & 0x0f00);
	c = (n & 0x00f0);
	d = (n & 0x000f)<< 12;*/
	x = ( (n & 0xf000)>>12 )| (n & 0x0f00)|(n & 0x00f0)|((n & 0x000f) << 12);
	printf("%x\n",x);
}
