#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;

};
int main()
{
	/*struct node *head=NULL;
	head=(struct node*)malloc(sizeof(struct node*));*/   
	struct node *head=(struct node *)malloc(sizeof(struct node *));		/*it is same as above 2 lines*/
	head->data=50;
	head->link=NULL;
	printf("%d\n",head->data);
	printf("%d\n",head->link);
}
