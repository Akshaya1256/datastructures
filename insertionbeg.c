#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void insert_first();
void print_traverse();
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
	
	/*truct node *new=(struct node*)malloc(sizeof(struct node*));
	new=insert_first(head,50);
	print_traverse(new);
	*/
}
void insert_first(struct node *head,int data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node*));
	new->data=50;
	new->link=head;
	
	struct node *temp=NULL;
	temp=head;
	printf("inserted successfully");
	print_traverse(new);
	//return head;
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
