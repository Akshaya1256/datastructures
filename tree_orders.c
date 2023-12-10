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
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}
void main()
{
	struct node *root=create();
	printf("\nBinary tree(inorder):");
	inorder(root);
	printf("\nBinary tree(preorder):");
	preorder(root);
	printf("\nBinary tree(postorder):");
	postorder(root);
}
