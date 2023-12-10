#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev_link;
	int data;
	struct node *next_link;
};
void traverse();
void insertbeg();
void insertlast();
void main()
{
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->prev_link=NULL;
	head->data=10;
	head->next_link=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->prev_link=NULL;
	current->data=20;
	current->next_link=NULL;
	
	head->next_link=current;
	current->prev_link=head;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->prev_link=NULL;
	current->data=30;
	current->next_link=NULL;
	head->next_link->next_link=current;
	current->prev_link=head->next_link;
	traverse(head);
	insertbeg(head,70);
	insertlast(head,100);
	traverse(head);
}
void traverse(struct node *head)
{
	struct node *temp=head;
	int count=0;
	//printf("NULL->");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next_link;
		count++;
	}
	//printf("\n%d\n",count);
	//printf("NULL");
}
void insertbeg(struct node *head,int data)
{
	struct node *temp=head;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->prev_link=NULL;
	new->data=data;
	new->next_link=NULL;
	head->prev_link=new;
	new->next_link=head;
	head=new;
	printf("\nAfter\n");
	traverse(head);
}
void insertlast(struct node *head,int data)
{
	struct node *temp=head;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->prev_link=NULL;
	new->data=data;
	new->next_link=NULL;
	while(temp->next_link!=NULL)
	{
		temp=temp->next_link;
	}
	temp->next_link=new;
	new->prev_link=temp;
	printf("\nLAst\n");
	//traverse(head);
}
