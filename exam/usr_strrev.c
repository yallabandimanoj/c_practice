#include<stdio.h>

void my_strrev(char *str)
{
	char *start = str;
	char *end   = str;
	char tmep;


	for(; *end != '\0'; *end++ );

	end--;

 for(; start < end ; start ++, end--)
{
     char	temp = *start;
	*start = *end;
	*end = temp;
}
}

   




int main()
{
	char str[] = "hello";
        my_strrev(str);
	printf("reverse string: %s\n",str);
       return 0;
}

