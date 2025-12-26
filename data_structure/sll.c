
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *tail = NULL;

void insert_at_begin()
{
	temp = malloc(sizeof(struct node));
	temp->data =5;
	temp->link = NULL;
	temp->link =head;
	head = temp;
}

void insert_at_end()
{
	temp = malloc(sizeof(struct node));
	temp->data =50;
	temp->link = NULL;
	tail->link=temp;
	tail = temp;
}
void traverse()
{
	struct node* ptr = head;
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}




int main()
{

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=10;
	temp->link = NULL;
	if(head == NULL)
	{
		head = tail = temp;
	}
	temp = malloc(sizeof(struct node));

	temp->data =20;
	temp->link =NULL;
	 tail->link=temp;
	 tail = temp;

	 
	temp = malloc(sizeof(struct node));



	temp->data = 30;
	temp->link = NULL;
        tail->link = temp;
	tail = temp;


	temp = malloc(sizeof(struct node));
	temp->data = 40;
	temp->link =NULL;
	tail->link = temp;
	tail = temp;
       
       insert_at_begin();

        printf("%d->",head->data);

	insert_at_end();
//	printf("%d->",head->link->link->link->link->data);

	 
	printf("%d->",head->link->data);
	printf("%d->",head->link->link->data);
	printf("%d->",head->link->link->link->data);
	printf("%d->",head->link->link->link->link->data);
	printf("%d->",head->link->link->link->link->link->data);
//        traverse();       

	return 0;

																																															
}


		
