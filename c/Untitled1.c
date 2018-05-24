#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter data to delete.        ");
	scanf("%d",&a);
	del(root,a);
}
void del(struct node* temp,int a)
{
	if(root==NULL)
	printf("Tree Empty");
	else if(a<root->data)
		root->left=del(root->left,a);
	else if(a>=root->data)
		root->right=del(root->right,a);
	else
	{
		if(root->left==NULL && root->right ==NULL)
			{
					
			}	
	}
	return root;
		
}
