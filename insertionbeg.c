#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void insert_first();
void print_traverse();
void insert_last();
void insert_random();
void main()
{
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node *));
	head->data=10;
	head->link=NULL;
	
	struct node *current;
	current=(struct node*)malloc(sizeof(struct node *));
	current->data=20;
	current->link=NULL;
	head->link=current;
	
	current=(struct node*)malloc(sizeof(struct node *));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	
	current=(struct node*)malloc(sizeof(struct node *));
	current->data=40;
	current->link=NULL;
	head->link->link->link=current;
	insert_first(head);
	insert_last(head,100);
	print_traverse(head);
	/*truct node *new=(struct node*)malloc(sizeof(struct node*));
	new=insert_first(head,50);
	print_traverse(new);
	*/
	insert_random(head,70,4);
	print_traverse(head);
}
void insert_first(struct node *head)
{
	struct node *new=(struct node*)malloc(sizeof(struct node*));
	new->data=50;
	new->link=head;
	
	struct node *temp=NULL;
	temp=head;
	//printf("inserted successfully");
	print_traverse(new);
	//return head;
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
void print_traverse(struct node *head)
{
	struct node *temp=NULL;
	temp=head;
	if(temp->link==NULL)
	{
		printf("sll empty");
	}
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
