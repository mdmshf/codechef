#include <stdio.h>
int main()
{
	int i,j,t,n[100000],h[100][100],k,c, f=1;
	printf("Enyer t");
	scanf("%d",&t);
	if(t <1 && t>100)
	f=0;
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		if(n[i] <1 && n[i]>100000)
		f=0;
		for(j=1;j<n[i];j++)
		{
		
		scanf("%d",&h[i][j]);
		if(h[i][j] <1 && h[i][j]>1000000)
		f=0;
		}
	}
	if(f!=0)
	{
		for(i=1;i<=t;i++)
		{
			c=0;
			for(j=1;j<n[i];j++)
			{
				for(k=1;k<n[i];k++)
				{
					if(h[i][j]==h[i][k] && j!=k)
					c++;
				}
			}
			printf("%d\n",c);
		}
	}
	
}
