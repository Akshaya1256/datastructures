#include<stdio.h>
#define MAX_SIZE 5
int front=-1;
int rear=-1;
int queue[MAX_SIZE];
int isempty()
{
	return rear==-1;
}
int isfull()
{
	return rear==MAX_SIZE-1;
}
int enqueue(int data)
{
	if(isfull())
	{
		printf("queue is full");
	}
	else
		return queue[++rear]=data;
}
int dequeue()
{
	if(isempty())
		printf("queue is empty");
	else
	{
		if(front==rear)
			front--;
		else
			front++;
		return queue[rear-1];
	}
}
int front_value()
{
	return queue[front];
}
int display()
{
	int i;
	if(isempty())
	{
		printf("Queue is empty");
	}
	else
	{
		for(i=front;i<rear;i++)
		{
			printf("%d--",queue[i]);
		}
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("AFter enqueue:");
	printf("\nFront value:%d",front_value());
	display();
	dequeue();
	dequeue();
	printf("\nAftr dequeue:");
	display();
}

