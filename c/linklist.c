#include <stdio.h>
#include <malloc.h>


struct list
{
	int info;
	struct list *next;
}
*head,*new,*start;
//    enterotyclime 200mg
//     stempetil


void main()
{
	int i,ctr=0;
	char ch='y';
	while(ch=='y'|| ch=='Y')
	{
		new=(struct list*)malloc(sizeof(list));
		ctr++;
		printf("\nEnter a value :  ");
		scanf("%d",&new -> info);
		if(head==NULL)
			head=start=new;
		else
		{
			start -> next=new;
			start =new;
		}
		printf("continue ?    ");
		scanf("%c",&ch);
	}
	start=head;
	for(i=1;i<=ctr;i++)
	{
		if(start -> next != NULL)
		printf("%d ->",start -> info);
		else
		printf("%d ->",start -> info);
		start=start -> next;
	}
	
	
}
