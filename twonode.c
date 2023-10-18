#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=(struct node *)malloc(sizeof(struct node *));
	head->data=50;
	head->link=NULL;
	printf("%d\n",head->data);
	printf("%d\n",head->link);
	struct node *current=(struct node *)malloc(sizeof(struct node *));
	current->data=25;
	current->link=NULL;
	head->link=current;
	printf("%d\n",head->link->data);		/*  *head.link->data*/
	printf("%d\n",head->link->link);		
	struct node *tail=(struct node *)malloc(sizeof(struct node *));
	tail->data=46;
	tail->link=NULL;
	head->link=tail;
	printf("%d\n",head->link->data);
	printf("%d\n",head->link->link);
}
