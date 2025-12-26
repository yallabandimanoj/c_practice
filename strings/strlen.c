#include<stdio.h>

int main()
{
char str[100];
printf("enter the string\n");
scanf("%[^\n]",str);
int i = 0;
while(str[i] != '\0')
{
	i++;
}
printf("%d\n",i);

return 0;
}

