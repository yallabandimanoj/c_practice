#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};


int main()
{
	
  struct node	*head = (struct node *)malloc(sizeof(struct node));
	head->data = 45;
        head->link = NULL;

       struct node *current= malloc(sizeof(struct node));
        current->data = 98;
	current->link  = NULL;
	head->link  = current;


	struct node *current1 = malloc(sizeof(struct node));
	current1->data = 93;
	current1->link = NULL;
	head->link->link = current1;

	printf("%d\n",head->data);
	printf("%d\n",current->data);
	printf("%d\n",current1->data);


	

	return 0;
}

