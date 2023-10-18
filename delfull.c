
#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node* del_entire(struct node *head);
void print_data(struct node *head);

int main()
{
	int data;
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
	
	print_data(head);
	head=del_entire(head);
	print_data(head);
}

struct node* del_entire(struct node *head)
{
	struct node *temp=head;
	if(temp==NULL)
		printf("Empty list");
	else if(head->link==NULL)
	{
		head=temp->link;
		free(temp);
		temp=NULL;
	}
	
	else 
	{
		while(temp!=NULL)
		{
			head=temp->link;
			//temp=temp->link;
			free(temp);
			temp=head;
		}		
		head=NULL;
	}
		return head;
}
void print_data(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
		printf("\n SLL is Empty");
	while(temp!=NULL)
	{	
		printf("%d->",temp->data);		
		temp=temp->link;						
	}
	// printf("NULL\n");
}

	
