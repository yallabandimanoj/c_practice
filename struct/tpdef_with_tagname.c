#include<stdio.h>

typedef struct student
{
	int id;
	char name[10];

}student;
int main()
{
	student s = { 100,"manoj"};
	printf("id:%d name: %s\n",s.id,s.name);
	return 0;
}

