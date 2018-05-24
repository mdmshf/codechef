#include <stdio.h>
int main()
{
	int t,n,i,j,k,l,a[501];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<=500;i++)
			a[i]=0;
		if(n==1)
			a[1]=-5;
		else if(n==2)
		{
			a[1]=-5;a[2]=-5;a[3]=-1;
		}
		else
		{
			a[1]=-5;a[2]=-5;a[3]=-1;
		for(i=3;i<=n;i++)
		{
			l=i-1;
			for(j=1;j<=500;j++)
			{
				if(a[j]==0)
				{
					a[j]=-5;break;
				}
			}
			for(k=1;k<j;k++)
			{
				if(a[k]==-5 && k+j<=500)
				{
					a[k+j]=-1;l--;
				}
			}
		}
		}
		for(i=1;i<=500;i++)
		{
			if(a[i]==-5)
			{
				printf("%d ",i);
				n--;
			}
			if(n==0)
			;//	break;
		}
		printf("\n");
	}	
	return 0;
}
