#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] = "hitechcity ";
	char s2[] = "hyderabad";
	 
	strncat(s1,s2,10);
	printf("%s\n",s1);
	return 0;
}
