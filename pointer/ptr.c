#include<stdio.h>

int main()
{
	int a =10;
	int *p = &a;

	printf("the value of a is =%d\n",a);

	printf("the address of a is =%p\n",&a);
	printf("the variable address in pointer is %p\n",p);

	printf("the pointer address  is =%p\n",&p);
	printf("the value in the pointer  =%d\n",*p);
	printf("the address of a is =%d\n",*(&a));
return 0;
}




