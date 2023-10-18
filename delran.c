#include<stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node *link;
};

struct node* del_random(struct node *head);
void print_data(struct node *head);
int main()
{
     int data;
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

     head=del_random(head);
     print_data(head);
}

struct node* del_random(struct node *head)
{
    struct node *temp=head;
    struct node *new=malloc(sizeof(struct node));
    new->link=NULL;
    int pos=2;
    if(temp==NULL)
           printf("empty list");
    else
    {       
          while(pos!=1)
          {
                new=temp;
                temp=temp->link;
                pos--;
          }
          new->link=temp->link;
          free(temp);
          temp=new;
    }     
    
    return head;
         
}

void print_data(struct node *head)
{
	struct node *temp=head;
    	while(temp!=NULL)
	{	
		printf("%d->",temp->data);
		temp=temp->link;
		
	}
}	

