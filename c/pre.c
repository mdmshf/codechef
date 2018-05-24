#include <stdio.h>
char ch[300];
int ii=1;
void insert();
void info();
void display();
void pre(int);
int main()
{
	int c;
	for(c=0;c<300;c++)
	ch[c]='0';
	do
	{
		printf("1 - Enter \n2 - Info\n3 - Pre \n4 - Exit\nEnter choice                 ");
		scanf("%d",&c);
	//	switch(c)
	//	{
		//	case 1:
		if(c==1)	insert();
		//	break;
			//case 2:
			else if(c==2)info();
		//	break;
//			case 3:
else if(c==3)			pre(1);
			//break;
			//case 4:
			//break;
	//	}
	}while(c!=4);
	return 0;
}
void insert()
{
	char a='y';
	printf("Enter elements");
	while(a=='y' ||a=='Y')
	{
		scanf(" %c",&ch[ii++]);
		display();
		printf("Enter more ?");
		scanf(" %c",&a);
	}	
}
void info()
{
	char a;int i=1,f=0;
	printf("Enter search element");
	scanf(" %c",&a);
	while(ch[i++]!='0')
	{
		if(ch[i]=='0')
		{
			printf("position of %c         = %d\n",a,i);
			if(ch[2*i]!='0')
			printf("posn of left child     = %d\n", 2*i);
			if(ch[2*i+1]!='0')
			printf("position of right child = %d \n\n",(2*i+1));
			f=1;
		}
	}
	if(f==0)
	printf("Element not found");
}
void pre(int i)
{
	if(ch[i]!='0')
	{
		
		printf(" %c   ",ch[i]);
		pre(2*i);
		pre(2*i+1);
	}
}
void display()
{
	int i=0;int k,l,j,m=0,n=ii,p;
	printf("\n");
	while(n!=1)
	{
		m++;n/=2;
	}
	m++;
	m=2*m-1;
	p=2*m+1;
	for(i=0;i<=ii;)
	{
		for(k=1;k<=m;k++)
		printf("\t|");
		for(j=1;j<=n;j++)
		{
			if(ch[++i]!='0')
			printf(" %c",ch[i]);
			for(l=1;l<=p;l++)
			printf("\t|");
		}printf("\n\n\n"); 
		m=m/2;
		n*=2;
		p/=2;
	}
}
