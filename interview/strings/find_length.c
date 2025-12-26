#include<stdio.h>
int main()
{        char str[30];

	printf("enter the string\n");
	scanf("%[^\n]",str);
	fgets(str, sizeof(str),stdin);
	
	str[strcspn(str,"\n")]='\0';
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);

}

