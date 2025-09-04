#include<stdio.h>
int main()
{
	unsigned int n = 0x1234;
	unsigned int a,b, c,result;

	a =(n & 0xf00f);
	
	b = (n & 0x0f00) >> 4;
	c = (n & 0x00f0) << 4;
	result = (a|b|c);
	printf("%x \n",result);
}


