#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *create(int key)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=key;
	new->left=new->right=NULL;
	return new;
}
struct node *sorted_to_bst(int arr[],int start,int end)
{
	if(start>end)
		return NULL;
	int mid=(start+end)/2;
	struct node *root=create(arr[mid]);
	root->left=sorted_to_bst(arr,start,mid-1);
	root->right=sorted_to_bst(arr,mid+1,end);
	return root;
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
int main()
{
	int n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements in sorted order:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	struct node *root=sorted_to_bst(arr,0,n-1);
	printf("\nInorder traversal:");
	inorder(root);
	printf("\nPreorder traversal:");
	preorder(root);
}
