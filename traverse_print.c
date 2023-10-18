#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void traverse(struct node *head);
void main()
{
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node*));
	head->data=10;
	head->link=NULL;
	struct node *current;
	current=(struct node*)malloc(sizeof(struct node*));
	current->data=20;
	current->link=NULL;
	head->link=current;
	current=(struct node*)malloc(sizeof(struct node*));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	current=(struct node*)malloc(sizeof(struct node*));
	current->data=40;
	current->link=NULL;
	head->link->link->link=current;
	traverse(head);
}
void traverse(struct node *head)
{
	struct node *temp=head;
	/*temp=head;*/
	if(head == NULL)
	{
		printf("\nSingle linked list is empty");
		exit(0);
	}
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
