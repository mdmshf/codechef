#include <stdio.h>
int fact(int n)
{
	int i,f =1;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
int ncr(int n,int r)
{
	int q;
	q=(fact(n)/(fact(r)*fact(n-r)));
	return q;
}
int main()
{
	int t,i,n,k,s,j;int a,b[100001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=1000;i++)
			b[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			b[a]+=1;
		}
		s=0;
		for(i=1;i<=1000;i++)
		{
			if(b[i]==1)
				s++;
			if(b[i]>1)
			{
				for(k=b[i];k>=1;k--)
				{
					s+=ncr(b[i],k);
				}
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
