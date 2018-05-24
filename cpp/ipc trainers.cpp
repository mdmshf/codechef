#include <stdio.h>
int main()
{
	int t,n,d,i,j,m,l,c,x[100001][3];long long int s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&d);s=0;m=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d %d %d",&x[i][0],&x[i][1],&x[i][2]);
		}
		for(j=1;j<=d;j++)
		{
			for(i=1;i<=n;i++)
			if(x[i][0]<=j && x[i][1]>0 && x[i][2]>m)
			{
				 l=i;m=x[i][2];c=1;
			}
			if(c==1)
			{
				x[l][1]--;m=0;c=0;
			}
		}
		for(i=1;i<=n;i++)
		{
			//printf("%d\t%d\t%d\n",x[i][0],x[i][1],x[i][2]);
			if(x[i][1]>0)
			{
				 s+=x[i][1]*x[i][2];
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
