#include <stdio.h>
int main()
{
	int t,i,j,c,n,p,q,a[100000]; long long int m,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&p);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}m=0;q=0;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<n-i+1;j++)
			{
				c=i;s=0;t=j;
				while(c>0)
				{
					s+=a[t];t++;c--;
				}
				//printf("%d\t",s);
				if((s%p)>=m)
				{
					if((s%p)>m)
						q=0;
					q++;m=s%p;
					//printf("%d\t",q);
				}
				
			}
		}
		printf("%lld %d\n",m,q);
	}
	return 0;
}
