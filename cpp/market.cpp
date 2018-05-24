#include <stdio.h>
int main()
{
	int t,i,j,q,n,x,y,z,o,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		int a[n+1];a[n]=-1;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<q;i++)
		{
			scanf("%d%d%d",&x,&y,&z);c=0;o=0;
			for(j=x-1;j<y;j++)
			{
				if(a[j]==a[j+1] && j<y-1)
				{
					o++;
				}
				else
				{
					o++;
					if(o>=z)
					{
						c++;
					}
					//printf("order of %d is %d\n",a[j],o);
					o=0;
				}
			}
			printf("%d\n",c);
		}
	}
	
		return 0;
}
