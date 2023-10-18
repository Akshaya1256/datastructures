#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
void delend();
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
	delend(head);
	print(head);
	
}
void delend(struct node *head)
{
	struct node *temp=head;
	if (head==NULL)
	{
		printf("sll is empty");
	}
	while(temp->link->link!=NULL)
	{
		temp=temp->link;
	}
	struct node *temp1=temp->link;
	temp->link=NULL;
	free(temp1);
	//print(head);
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
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
	
	
	
