#include<stdio.h>

int strlength ( char *len)
{
	int l=0;
	while(len[l] != '\0')
	{
		l++;
	}
	return l;
}

int main()
{
	char str[100];
	printf("enter the string\n");
	scanf("%[^\n]s",str);

   int len = 	strlength(str);
	printf("%d",len);
}
