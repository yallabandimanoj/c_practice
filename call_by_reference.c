#include<stdio.h>
int add(int *x)
{
	*x = *x+5;
	return *x;
}
int main()
{
int a = 10;
add(&a);
printf("%d\n",a);
}
