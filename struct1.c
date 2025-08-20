#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[10];
	float marks;

};
int main()
{
	struct student stu;
	stu.id =100;
	strcpy(stu.name,"yocto");
	stu.marks=900;

	printf("id:%d\n",stu.id);
	printf("name:%s\n",stu.name);
	printf("marks:%2f\n",stu.marks);

}
