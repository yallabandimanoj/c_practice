#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];

	printf("enter the string\n");
	fgets(str1, sizeof(str1),stdin);
		int i=0;


	for( i = 0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i] ='\0';
	

printf("after strcopy %s\n",str2);
}
