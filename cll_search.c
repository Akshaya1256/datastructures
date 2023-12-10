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
	printf("%d  , First node=%d",temp->data,temp->data);
}
void search(struct node *head,int search)
{
	struct node *temp=head->link;
	int count=1;
	int c;
	while(temp!=head)
	{
		if(temp->data==search)
		{
			printf("%d found at node-%d",search,count);
			c++;
			break;
		}
		else
		{
			temp=temp->link;
			count++;
		}
	}
	if(c==0)
	{
		printf("%d not found",search);
	}
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
	printf("cll:");
	traverse(head);
	int searele;
	printf("\nsearch element:");
	scanf("%d",&searele);
	search(head,searele);
}
	
