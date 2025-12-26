#include<stdio.h>
int main()
{
	int a = 1;
	void *p = &a;
	printf("%d\n",*(int*)p);
}

