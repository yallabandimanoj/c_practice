#include<stdio.h>
#include"mystring.h"

void main()
{
	char src[100] = "jagadeesh";
	int len = mystrlen(src);
	printf("lenght of the string:%d\n",len);
	char des[100] = "manoj";
	mystrcat(des,src);
	printf("string concatination : %s\n",des);
	char copy[100];
	mystrcpy(copy,src);
	printf("string copy :%s\n",copy);
}

