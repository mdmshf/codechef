#include <stdio.h>
int main()
{
	int t,i,j,n,b,m,c,a[100001];
	printf("running");
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				b=a[i]|a[j];
				if(a[i]>a[j])
					m=a[i];
				else
					m=a[j];
				if(b<=m)
				{
					c++;
				}
			}
		}
		printf("%d\n",c);
	}
}
