#include<stdio.h>

int main()
{
int num,temp,rev =0;
printf("enter the number\n");
scanf("%d",&num);

temp = num;
while(num>0)
{
	rev=rev*10+num%10;
	num/=10;
}
if(temp == rev)
{
printf("num is palindrome\n");
}
else
{
	printf("num is not apalindrome\n");
}
}




