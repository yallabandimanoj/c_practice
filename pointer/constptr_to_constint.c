#include<stdio.h>

int main()
{
	int a = 10, b=20;

	const int * const p = &a;

	printf("initial *p value is = %d\n",*p);

	// *p = 40;
	// p =&b;
	printf("now *p value is =%d\n",*p);
	return 0;
}

