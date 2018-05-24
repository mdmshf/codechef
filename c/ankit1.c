
#include <stdio.h>
#include <stdlib.h>

struct tree
{
	int data;
	struct tree *left,*right;
};

void display(struct tree *root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d ",root->data);
		display(root->right);
	}
}

struct tree* insert(struct tree *root,int x)
{
	if(root==NULL)
	{
		root=(struct tree*)malloc(sizeof(struct tree));
		root->data=x;
		root->right=root->left=NULL;
		return root;
	}
	else if(x<root->data)
		root->left=insert(root->left,x);
	else
		root->right=insert(root->right,x);
	return root;
}

int main()
{
	int ch=1,choice,x;
	struct tree *root=NULL;
	while(ch==1)
	{
		printf("Menu:\n1.Insert\n2.display\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data    :   ");
				scanf("%d",&x);
				root=insert(root,x);
				printf("\nTree : ");
				display(root);
				printf("\n\n");
				break;
			case 2:
				printf("\nTree : ");
				display(root);
				printf("\n\n");
				break;
			case 3:
				ch=0;
				break;
			default:
				printf("An invalid option\n");	
		}
	}	
	return 0 ;
}
