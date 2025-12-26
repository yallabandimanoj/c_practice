#include<stdio.h>
#include<string.h>

int main()
{
int palindrome=1;

char str[100];
printf("enter the string \n");
scanf("%[^\n]",str);

int i =0;
int j=strlen(str)-1;
while(i<j)
{
	if(str[i] != str[j])
	{
		palindrome = 0;
		break;
	}
	i++;
	j--;
}
if(palindrome == 1)
{
printf("string is palindrome\n");
}
else
{
	printf("string is not a palindrome\n");
}
}

