#include<string.h>
#include<stdio.h>

int main()
{
	char ch, str[100];int i,cnt =0;
	printf("enter the string\n");
	//scanf("%[^\n]s",str);
	gets(str);

	for( i=0;str[i];i++)
		cnt = strlen(str);
	printf("%d\n",cnt);

	for(int i=0;i<=cnt/2;i++)
	{
		ch=str[i];
		str[i]=str[cnt-i-1];
		str[cnt-i-1]=ch;
	}
	printf("reversed string %s\n",str);
}


