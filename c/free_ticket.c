#include <stdio.h>
#include <conio.h>
int c,f;
int a[3][100];
int main()
{
	int n=c*(c-1)/2;int max;
	int p[n];int k=-1,i,j;
	printf("Enter c and f");
	scanf("%d%d",&c,&f);
	for(i=1;i<=f;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter values %d",i);
		scanf("%d",&a[i][j]);
		}
	}

	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i<j)
			{
				p[++k]=price(i,j);
			}
		}
	}
	max=p[0];
	for(i=0;i<k;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	printf("%d",max);	
}
int price(int x,int y)
{
	printf("%d\t%d\t",x,y);
	int s=0;int i;
	for(i=1;i<=f;i++)
	{
		if(a[i][0]==x && a[i][1]==y)
		{
			s+=a[i][2];
			break;
		}
		else if(a[i][0]==x && a[i][1]!=y)
		{
			s+=a[i][2];
			x=a[i][1];
		}
	}
	printf("%d\n",s);
	return s;
}
