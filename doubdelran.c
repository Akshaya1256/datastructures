#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
void traverse(struct node *head)
{
	struct node *temp=NULL;
	temp=head;
	if(head==NULL)
	{
		printf("List empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d<->",temp->data);
			temp=temp->next;
		}
		printf("NULL");
	}
	//printf("NULL");
}
void delran(struct node *head,int pos)
{
	struct node *temp=head;
	struct node *new=head;
	if(head==NULL)
		printf("EMpty");
	else if(pos==1)
	{
		head=temp->next;
		free(temp);
		temp->prev=NULL;
	}
	else
	{
		while(pos!=1)
		{
			new=temp;
			temp=temp->next;
			pos--;
		}
		new->next=temp->next;
		free(temp);
		temp=new;
	}
}
	

void main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->prev=NULL;
	head->next=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->prev=NULL;
	current->data=20;
	current->next=NULL;
	
	head->next=current;
	current->prev=head;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->prev=NULL;
	current->data=30;
	current->next=NULL;
	
	head->next->next=current;
	current->prev=head->next;
	
	printf("Before deletion:");
	traverse(head);
	
	//printf("\nAfter deletion at beginning:");
	//delbeg(head);
	
	printf("\nAfter deletion at ran:");
	delran(head,2);
	traverse(head);
}
