#include<stdio.h>
#include<string.h>

void reverse(char *s, char *e )
{
	while(s<e)
	{
		char temp = *s;
		*s = *e;
		*e = temp;
Present 10:00		s++;
		e--;
	}

}


int main()
{
char str[20];
printf("enter string\n");
fgets(str,20,stdin);
str[strcspn(str,"\n")]='\0';
char *s = str;
char *e = str;
while(*e)
{
	if(*e == ' '|| *e == '\t')
	{
		reverse(s,e-1);
		s=e+1;
	}
	e++;
}
reverse(s,e-1);
printf("reverse words in a string : %s\n",str);
}

