#include <stdio.h>

int mystrlen(const char *str )
{
    int len=0;
    while(*str != '\0')
    {
	    str++;
   len++;    
    }
    return len;
}

int main()
{
    char str[] ="manoj";
    printf("lenghth of the str %s = %d\n",str,mystrlen(str));
   

    return 0;
}
