#include <stdio.h>
int main()
{
	int t,n,k,i,j,l,c,flag,temp;
	scanf("%d",&t);
	while(t--)
	{
		int a[2501][2501]={0};
		c=0;
		scanf("%d %d",&n,&k);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i][0]);
			for(j=1;j<=a[i][0];j++)
			{
				scanf("%d",&temp);
				a[i][temp]=1;
			}
		}
		for(i=1;i<=n;i++)
			for(j=i+1;j<=n;j++)
			{
				int b[2501]={};flag=0;
				for(l=1;l<=k;l++)
					if(a[i][l]==1 || a[j][l]==1)
						b[l]=1;
				for(l=1;l<=k;l++)
					if(b[l]==0)
					{
						flag=1;break;
					}
				if(flag!=1)
					c++;
			}
		printf("%d\n",c);
	}
	return 0;
}
