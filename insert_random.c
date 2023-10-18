#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
void insert_random();
void print();
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
	current=(struct node*)malloc(sizeof(struct node));
	current->data=40;
	current->link=NULL;
	head->link->link->link=current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=60;
	current->link=NULL;
	head->link->link->link->link=current;
	
	insert_random(head,50,4);
	print(head);
	
}
void insert_random(struct node *head,int data,int position)
{
	struct node *temp=head;
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	while(position!=2)
	{
		temp=temp->link;
		position--;
	}
	new->link=temp->link;
	temp->link=new;
	
}
void print(struct node *head)
{
	struct node *temp=head;
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
	
	
	
	
	
