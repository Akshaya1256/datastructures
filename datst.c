#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node*));
	head->data=10;
	head->link=NULL;
	
	printf("First node");
	printf("\n%d",head->data);
	printf("\n%d",head->link);
	
	struct node *current;
	current=(struct node*)malloc(sizeof(struct node*));
	current->data=20;
	current->link=NULL;
	head->link=current;
	
	printf("\n%d",head->link);
	
	printf("\nSecond node");
	printf("\n%d",head->link->data);
	printf("\n%d",head->link->link);
	
	current=(struct node*)malloc(sizeof(struct node*));
	current->data=30;
	current->link=NULL;
	head->link=current;
	
	printf("\n%d",head->link);
	
	printf("\nThird node");
	printf("\n%d",head->link->data);
	printf("\n%d",head->link->link);
}
