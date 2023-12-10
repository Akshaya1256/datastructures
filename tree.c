#include<stdio.h>
#define MAX 10
char tree[MAX];
void root(char node)
{
	if(tree[0]!='\0')
		printf("Root already allocated");
	tree[0]=node;
}
void left(char node,int parent)
{
	tree[(2*parent)+1]=node;
}
void right(char node,int parent)
{
	tree[(2*parent)+2]=node;
}
void print();
void main()
{
	root('A');
	left('B',0);
	right('C',0);
	left('D',1);
	right('E',1);
	right('F',2);
	print();
}
void print()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		if(tree[i]=='\0')
			printf("-- ");
		else
			printf("%c ",tree[i]);
	}
}

