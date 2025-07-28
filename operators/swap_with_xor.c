#include<stdio.h>

int main()
{
	int a =100;
	int b=500;
	a = a^b;
	b = a^b;
	a = a^b;

	printf("after swaping a=%d b=%d",a,b);
}

