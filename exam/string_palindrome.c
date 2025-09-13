#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
	int i,j;
	char temp;
	int len = strlen(str);

	for(i = 0, j = len - 1; i<j; i++,j-- )
{
	temp = str[i];
	str[i] =str[j];
	str[j] = temp;
}
}


int main()
{
	char str1[10] = "madam";

	char str2[10];

	strcpy(str2,str1);

	reverse(str2);

printf("string reverse %s\n",str2);

if(strcmp(str1,str2) == 0)

	printf("string is a palindrome\n");
else
	printf("string is not a palindrome \n");
}

