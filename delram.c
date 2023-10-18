#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
void delrandom(struct node *head, int position);
void print1(struct node *head);

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

	//delrandom(head,4);
	current=(struct node*)malloc(sizeof(struct node));
	current->data=70;
	current->link=NULL;
	head->link->link->link->link->link=current;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->data=80;
	current->link=NULL;
	head->link->link->link->link->link->link=current;
	
	delrandom(head,4);
	print1(head);
}

void delrandom(struct node *head,int position)
{
	struct node *temp=head;
	struct node *new=head;
	
	if (head==NULL)
		printf("sll is empty");
	if (position==1)
	{
		head=temp->link;
		free(temp);
		temp=NULL;
	}
	else
	{
		while(position!=1)
		{
			new=temp;
			temp=temp->link;
			position--;
		}
		new->link=temp->link;
		free(temp);
		temp=new;
		//temp=new;
	}
	
}

void print1(struct node *head)
{
	struct node *temp=head;
	if(head == NULL)
	{
		printf("\nSingle linked list is empty");
		exit(0);
	}
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}
	
