#include<stdio.h>
void mystrcat(char *dest,const char *src )
{
    while(*dest)
    {
        dest++;
       
    }
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char str1[15] = "embedded ";
    char str2[20] = "engineer";
   
    mystrcat(str1,str2);
    printf("concatenated str = %s\n",str1);
    return 0;
   
}   
