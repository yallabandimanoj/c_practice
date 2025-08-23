#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "hyderabad ";
       char s2[] = "andhrapradesh";
           strncat(s1,s2,15);
          printf("%s\n",s1);
     return 0;
}

