#include<stdio.h>

int main()
{
	int a = 10,b =20;

	const int *p =&a;

	printf("intial: *p value is= %d\n",*p);


	// *p = 15; //error can't modify value through pointer 

	p = &b;

	printf("now *p value is= %d\n",*p);

	return 0;
}

