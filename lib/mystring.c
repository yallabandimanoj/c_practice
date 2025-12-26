#include"mystring.h"

int mystrlen(const char *str)
{
	int i = 0;
	int len = 0;
	while(*(str+i) != '\0')
	{
		len++;
		i++;
	}
	return len;
}



char* mystrcat(char *des,const char *src)
{
	int i = 0;
	int len = 0;
	while(*(des+i) != '\0')
	{
		len++;
		i++;
	}
	int j = 0;
	while(*(src+j) != '\0')
	{
		*(des+len+j) = *(src+j);
		j++;
	}

	*(des+len+j) = '\0';
	return des;

}


char* mystrcpy(char *des,const char *src)
{
	int i = 0;
	while(*(src+i) != '\0')
	{
		*(des+i) = *(src+i);
		i++;
	}
	*(des+i) = '\0';
	return des;
}




