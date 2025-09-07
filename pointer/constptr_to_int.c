#include<stdio.h>

int main()
{

	int a=10,b=20;

	int * const p = &a;

	printf("intial value of *p = %d\n",*p);

	*p =30;

//	p = &b;

	printf("after *p = 30, a = %d, *p = %d\n",a,*p);

	return 0;
}


