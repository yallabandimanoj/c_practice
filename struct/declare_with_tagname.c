#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name ;
};
int main()
{
	struct student s1={10,'s'};
	printf("id:%d name:%c\n",s1.id,s1.name);
}

