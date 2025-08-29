#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30] = "hyderabad ";
	char s2[]  = "telagana";

	strcat(s1,s2);
	printf("%s",s1);

	return 0;
}


