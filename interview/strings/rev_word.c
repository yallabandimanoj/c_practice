#include<stdio.h>
#include<string.h>

void strrev(int l,int r, char *str)
{
	char temp;
	while(l<r)
	{
		temp =str[l];
		str[l]=str[r];
		str[r]=temp;
	l++;
	r--;
	}
}


int main()
{
	char str[]="embedded linux is a great learning";

	int l=0, i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='\n'||str[i] == ' ' || str[i]  =='\0'|| str[i] =='\t' )
		{
			strrev(l,(i-1),str);
			l = i+1;
		}
		i++;
	}

	printf("strrev:%s\n",str);
}

