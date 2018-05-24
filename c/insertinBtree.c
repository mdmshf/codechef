#include <stdio.h>
#include <stdlib.h>
struct node* display(struct node*);
struct node* insert(struct node*,int);
struct node* del(struct node*,int);
struct node* min(struct node*);
struct node
{
	int data;
	struct node* left;
	struct node* right;
}*root;
int main()
{
	int d;int c=0;
	do
	{
	printf("\n\tMENU\n1 - Insertion in Binary Tree.\n2 - Deletion in Binary Tree.\n3 - Exit.\nEnter choice.\t\t\t");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
					printf("Enter data.\t\t\t");
					scanf("%d",&d);
					root=insert(root,d);
					printf("Inorder traversal is   :\t");
					display(root);
					break;
		case 2 :
					printf("Enter element to delete.\t\t");
					scanf("%d",&d);
					root=del(root,d);
					printf("Inorder traversal is   :\t");
					display(root);
					break;
		case 3 :
					printf("Program Terminated.\n");
					break;	
		default:
					printf("Enter correct choice.");
					break;
	}
	}while(c!=3);
}
struct node* insert(struct node *root,int da)
{
	if(root==NULL)
	{
		root =  (struct node *)malloc(sizeof(struct node));
		root->data=da;
		root->left=NULL;
		root->right=NULL;
	}
	else if(da<root->data)
		root->left=	insert(root->left,da);
	else
		root->right=insert(root->right,da);
	return root;
}
struct node* del(struct node* root, int da)
{
    if (root == NULL) 
		return root;
 	if (da < root->data)
        root->left = del(root->left, da);
  	else if (da > root->data)
        root->right = del(root->right, da);
 	else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
 		struct node* temp = min(root->right);
 		root->data = temp->data;
        root->right = del(root->right, temp->data);
    }
    return root;
}
struct node * min(struct node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;
 	return current;
}
struct node* display(struct node* temp)
{
	if(temp!=NULL)
	{
		display(temp->left);
		printf("%d\t",temp->data);
		display(temp->right);
	}
}
