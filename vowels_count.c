#include<stdio.h>

int main()
{
	char str[100];
	char *ptr;
	int count = 0;
	printf("enter the string\n");
	fgets(str, sizeof(str),stdin);
	ptr = str;
	while(*ptr != '\0')
	{
		char ch  = *ptr;
	if(*ptr  == 'a' || *ptr == 'e'|| *ptr == 'i'|| *ptr == 'o' || *ptr == 'u'||*ptr == 'A'||*ptr == 'E'||*ptr == 'I'||*ptr == 'O'||*ptr == 'U')
	{
		count++;
printf("%c ",*ptr);
	}
	ptr++;
}
printf("\n%d\n",count);
return 0;
}


