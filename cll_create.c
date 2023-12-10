#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void traverse(struct node *head)
{
	struct node *temp=head->link;
	do
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}while(temp!=head->link);
	printf("%d , 1st node=%d",temp->data,temp->data);
}
struct node *insertbegin(struct node *head,int data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	
	new->link=head->link;
	head->link=new;
	return head;
}
struct node *insertend(struct node *head,int data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	
	new->link=head->link;
	head->link=new;
	
	head=head->link;
	return head;
}
struct node *insertrandom(struct node *head, int data, int pos)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
void main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=head;
	
	insertbegin(head,20);
	head=insertbegin(head,30);
	
	printf("cll:\n");
	traverse(head);
	
	head=insertend(head,50);
	printf("\nat end");
	traverse(head);
}
