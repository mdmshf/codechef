#include <stdio.h>
int main()
{
	int t,n,i,j,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		for(i=1;i<=n;i++)
		{
			printf("%d\n",n);
			c=i;d=c+1;
				if(c>n) c=1;
				if(d>n) d=1;
			for(j=1;j<=n;j++)
			{
				printf("%d %d %d\n",j,c,d);
				c++;d++;
				if(c>n) c=1;
				if(d>n) d=1;
			}
		}
	}
	return 0;
}
