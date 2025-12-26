#include<stdio.h>

int myatoi(char *s)
{
	int result = 0;
	int sign =  1;
	char *ptr = s;
	int flag = 0;
	int count = 0;

	while(*(ptr) != '\0')
	{
		if((*(ptr) >= '0' && *(ptr) <= '9') || *(ptr) == ' ' || *(ptr) == '-' || *(ptr) == '+')
		{
			if(*(ptr) >= '0' && *(ptr) <= '9')
			{
				result = result*10 + (*(ptr) - '0');
				count++;
			}
			if(count == 0)
			{

				if(*(ptr) == '-')
				{
					sign = -1;
				}
			}
			else
			{
				if(*(ptr) == '-')
				{
					break;
				}
				if(*(ptr) == '+')
				{
					break;
				}
			}
		}
		else
		{
			break;
		}
		ptr++;
	}
	result = result*sign;
	return result;
}

int main()
{
	printf("enter the string:");
	char str[100];
	fgets(str,100,stdin);
	int len = myatoi(str);
	printf("%d\n",len);
}
