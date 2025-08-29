#include<stdio.h>
int mystrcmp(const char *str1 ,const char *str2)
{
    while(*str1 && (*str1 == *str2)){
        str1++;
        str2++;
    }
    return(*str1 - *str2);
}

int  main()
{
    char str1[] = "yallabandi";
    char str2[] = "yallabandi";
   
    int result = mystrcmp(str1,str2);
   
    if(result == 0)
    printf("str are equal\n");
    else if(result < 0)
        printf("str1 < str2\n");
        else
         printf("str1 > str2\n");
       return 0;
}


