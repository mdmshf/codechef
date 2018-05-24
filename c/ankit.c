#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* insert(struct node *start,int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(start==NULL)
		start=temp;
	else
		start->next=insert(start->next,x);
	return start;
}

struct node* reverse(struct node* start)
{
	struct node *t1,*t2,*t3;
	t2=start;
	t1=NULL;
	while(t2!=NULL)
	{
		t3=t2->next;
		t2->next=t1;
		t1=t2;
		t2=t3;
	}
	start=t1;
	return start;
}

void display(struct node* start)
{
	if(start!=NULL)
	{
		printf("%d  ",start->data);
		display(start->next);
	}
}

int main()
{
	struct node *start=NULL;
	int n,i,x;
	printf("Enter the numbers u wanna insert in the linked list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		start=insert(start,x);
	}
	printf("Entered list  : ");
	display(start);
	printf("\n");
	start=reverse(start);
	printf("Reversed list : ");
	display(start);
	return 0;
}
