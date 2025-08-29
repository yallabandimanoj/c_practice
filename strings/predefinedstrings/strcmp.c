#include<stdio.h>
#include<string.h>

int main()
{
	char s1[] = "india";
	char s2[] =  "india";
         int res = strcmp(s1,s2);
	 if(res == 0)
	 {
		 printf("s1 and s2 are same\n");
	 }
	 else 
	{
		printf("s1 and s2 are not same\n");
	}
}

