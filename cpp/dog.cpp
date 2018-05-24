#include <stdio.h>
int main()
{
	int t,n,k,p,i,j,l,m,c,a[100000];char b[100000];
	scanf("%d %d %d",&n,&k,&p);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%s",&b);
			/*for(j=0;j<n;j++)
			{
				printf("%d ",a[j]);
			}printf("\n");*/
	/*for(i=0;i<p;i++)
	{
		printf("%d %c   ",i,b[i]);
	}*/
	for(i=0;i<p;i++)
	{
		if(b[i]=='?')
		{
			m=0;
			for(j=0;j<=n-k;j++)
			{
				c=0;
				for(l=j;l<j+k;l++)
					if(a[l]==1)
						c++;
				if(c>m)	
					m=c;
			}
			printf("%d\n",m);
		}
		if(b[i]=='!')
		{
			t=a[n-1];
			for(j=n-1;j>0;j--)
				a[j]=a[j-1];
			a[0]=t;
			/*for(j=0;j<n;j++)
			{
				printf("%d ",a[j]);
			}printf("\n");*/
		}
	}
	return 0;
}
