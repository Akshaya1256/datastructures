#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create()
{
	int data;
	int input;
	printf("\nDo you want to add a node?(0 for NO 1 for YES");
	scanf("%d",&input);
	if(!input)
		return NULL;
	else
	{
		struct node *new=malloc(sizeof(struct node));
		printf("\n Enter data");
		scanf("%d",&data);
		new->data=data;
		
		printf("left child of %d",new->data);
		new->left=create();
		
		printf("right child of %d",new->data);
		new->right=create();
		
		return new;
	}
}
void display(struct node *root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d ",root->data);
		display(root->right);
	}
}
void main()
{
	struct node *root=create();
	printf("\nBinary tree(inorder):");
	display(root);
}
