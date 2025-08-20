#include<stdio.h>
#include<string.h>
	struct student
	{
		int empid;
		char name[30];
		float salary;
	};

int main()
{
	struct student s1;
	s1.empid = 99;
	s1.salary =100000;
	strcpy(s1.name,"manoj");

	printf("id:%d\n",s1.empid);
	printf("salary:%.2f\n",s1.salary);
	printf("name:%s\n",s1.name);
}

