#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char sub[100];
	int len1,len2;
	printf("enter the string\n");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	len1=strlen(str)
	printf("enter the substring\n");
	fgets(sub,100,stdin);
	str[strcspn(str,"\n")]='\0';




