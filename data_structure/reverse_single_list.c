#include<stdio.h>
#include<stdlib.h>


struct list
{
	int data;
	struct list next;
};
struct list *head = NULL, *tail = NULL, *temp;

struct list *create_node(int n)
