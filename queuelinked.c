#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
int isempty()
{
	return front==NULL;
}
int enqueue(int data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	if(front==NULL)
	{
		front=rear=NULL;
	}
	else
	{
		rear->link=new;
		new=rear;
	}
}
int dequeue()
{
	struct node *temp=NULL;
	temp=front;
	return rear->data;
}
int display()
{
	struct node* temp=NULL;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d--",temp->data);
		temp=temp->link;
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	printf("after enqueue:");
	display();
	dequeue();
	printf("\naafter deuquq:");
	display();
}
