#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void insert_last();
void print_traverse();
void main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	
	current=(struct node*)malloc(sizeof(struct node *));
	current->data=40;
	current->link=NULL;
	head->link->link->link=current;
	
	insert_last(head,50);
	print_traverse(head);
	
}
void insert_last(struct node *head,int data)
{
	struct node *temp=NULL;
	temp=head;
	struct node *new=(struct node*)malloc(sizeof(struct node*));

	new->data=data;
	new->link=NULL;
	
	printf("inserted successfully");
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=new;
}
void print_traverse(struct node *head)
{
	struct node *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
