#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

int main()
{
struct node *head  = (struct node *)malloc(sizeof(struct node));
	head->data = 100;
	head->link = NULL;
	printf("%d->%p\n",head->data,head->link);


}


