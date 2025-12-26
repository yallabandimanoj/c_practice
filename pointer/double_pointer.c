#include<stdio.h>
int main()
{
int a = 1;
int *p = &a;
int **pp = &p;
printf("%d ",a);
printf("%d ",*p);
printf("%d ",**pp);
}

