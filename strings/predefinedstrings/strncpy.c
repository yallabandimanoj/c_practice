#include<stdio.h>
#include<string.h>

int main()
{
	char src[] ="manoj";
	char dest[10];
	strncpy(dest,src,5);
	dest[5] ='\0';
	printf("%s",dest);
	return 0;
}

