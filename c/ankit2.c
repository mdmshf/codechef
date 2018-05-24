#include <stdio.h>
#include <stdlib.h>

struct tree
{
	int data;
	struct tree *right,*left;
}*temp;

void display(struct tree *node)
{
	if(node!=NULL)
	{
		display(node->left);
		printf("%d ",node->data);
		display(node->right);
	}
}

struct tree* max(struct tree* node)
{
	if(node->right!=NULL)
		node=max(node->right);
	return node;
}

struct tree* insert(struct tree* node, int x)
{
	if(node==NULL)
	{
		node=(struct tree*)malloc(sizeof(struct tree));
	    node->data=x;
		node->left=node->right=NULL;
	}
	else if(x<=node->data)
		node->left=insert(node->left,x);
	else
		node->right=insert(node->right,x);
	return node;
}

struct tree* del(struct tree* node,int x)
{
	if(node==NULL)
		return node;
	else if(x<node->data)
		node->left=del(node->left,x);
	else if(x>node->data)
		node->right=del(node->right,x);
	else
	{
		if(node->right==NULL && node->left==NULL)
			node=NULL;
		else if(node->right==NULL)
			node=node->left;
		else if(node->left==NULL)
			node=node->right;
		else
		{
			temp=max(node->left);
			node->data=temp->data;
			node->left=del(node->left,temp->data);
		}
	}
	return node;
}

int main() 
{
	struct tree *node=NULL;
	int n,i,x;
	printf("Enter the no. of inputs u wanna insert in the tree\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		node=insert(node,x);
	}
	printf("Entered tree is : ");
	display(node);
	printf("\nEnter the data u wanna delete from the tree : ");
	scanf("%d",&x);
	node=del(node,x);
	printf("Tree after the deletion of %d : ",x);
	display(node);
	return 0;
}

