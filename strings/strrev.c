#include<stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char rev[100];
	printf("enter the string\n");
	scanf("%[^\n]",str);
	int len = strlen(str);
         
	int j=0;
	for(int i=len-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
	printf("Reversed %s\n ",rev);
	return 0;
}

	  
