#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
void delbeg();
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
	delbeg(head);
	
	
}
void delbeg(struct node *head)
{
	struct node *temp=head;
	int position=1;
	if (head==NULL)
	{
		printf("sll is empty");
	}
	if (position==1)
	{
		head=temp->link;
		free(temp);
	}
	temp=NULL;
	print(head);
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
	
	
	
	
	
	
	
