#include<stdio.h>
int main()
{
	char ch = 'a';

	char *p = &ch;

	printf("the value of a = %d\n",ch);
	
	printf("Address of ch  = %p\n",&ch);

	printf("the value of p = %p\n",p);
	
	printf("the value of address p  = %p\n",&p);

	printf("the value of address at p  = %p\n",*(&p));


	return 0;
}


     
