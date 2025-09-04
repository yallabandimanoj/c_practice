#include<stdio.h>
#include<string.h>
int main()
{
	char c[] = "hello";
	int n = sizeof(c)/sizeof(c[0]);

	char *s = c ;
	char *e = c + strlen(c)-1;
	printf("before reverse the string %s\n",c);
	
	while(s < e)
	{
		int temp = *s;

		*s = *e;

		*e = temp;
		 
		s++;
		e--;
	}
	printf("after reverse thre string : %s\n",c);
}
