#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void delbeg(struct node *head)
{
	struct node *temp=head->link;
	head->link=temp->link;
	free(temp);
	temp=NULL;
}
struct node *delran(struct node *head,int pos)
{
	struct node *temp=head->link;
	struct node *new=head->link;
	while(pos!=1)
	{
		new=temp;
		temp=temp->link;
		pos--;
	}
	new->link=temp->link;
	free(temp);
	//temp=NULL;
	return head;
}
struct node *delend(struct node *head)
{
	struct node *temp=head->link;
	//struct node *new=head;
	while(temp->link!=head)
	{
		temp=temp->link;
	}
	struct node *new=temp->link;
	temp->link=head->link;
	free(new);
	new=NULL;
	//head=temp;
	head->link=temp->link;
	return head;
}
void traverse(struct node *head)
{
	struct node *temp=head->link;
	do
	{
	printf("%d->",temp->data);
	temp=temp->link;
	}while(temp!=head->link);
	printf("%d  , First node=%d",temp->data,temp->data);
}
struct node *insertbeg(struct node *head,int value)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=value;
	new->link=NULL;
	new->link=head->link;
	head->link=new;
	return head;
}
void main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=head;
	insertbeg(head,20);
	insertbeg(head,30);
	insertbeg(head,40);
	insertbeg(head,50);
	insertbeg(head,60);
	traverse(head);
	delbeg(head);
	printf("\nAfter deletion beginning:");
	traverse(head);
	printf("\nAfter delete end:");
	delend(head);
	traverse(head);
	int position;
	printf("\nposition:");
	scanf("%d",&position);
	printf("\nAfter delete random:");
	delran(head,position);
	traverse(head);
}

