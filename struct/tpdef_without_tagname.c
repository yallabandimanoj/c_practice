#include<stdio.h>
typedef struct
{
	int id;
	char name[50];
}student;

int main()
{
	student s={999,"manoj"};
	printf("id:%d,name:%s\n",s.id,s.name);
}
