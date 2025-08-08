#include<stdio.h>
int main()
{
	struct{
		int id;
		char name[20];
}emp ={229,"manoj"};

printf("id: %d name: %s\n",emp.id,emp.name);
return 0;
}


