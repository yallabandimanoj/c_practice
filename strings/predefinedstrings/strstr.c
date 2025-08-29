#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "yocto tutor";
       char *pos  = strstr(str,"yocto");
if(pos  != NULL)

printf("found\n");
else
printf("not found\n");

return 0;
}


