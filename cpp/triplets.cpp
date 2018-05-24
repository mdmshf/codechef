#include <stdio.h>
int main()
{
	long long int t,p,q,r,x,y,i,j,k,s,w,a[100000],b[100000],c[100000],d[100000],e[100000];
	scanf("%lld",&t);
	while(t--)
	{
		s=0;
		scanf("%lld %lld %lld",&p,&q,&r);
		for(i=0;i<p;i++)
			scanf("%lld",&a[i]);
		for(i=0;i<q;i++)
			scanf("%lld",&b[i]);
		for(i=0;i<r;i++)
			scanf("%lld",&c[i]);
		for(j=0;j<q;j++)
		{
			x=-1;
			for(i=0;i<p;i++)
			{
				if(a[i]<=b[j])
				{
					d[++x]=a[i];
				}
			}
			y=-1;
			for(k=0;k<r;k++)
			{
				if(c[k]<=b[j])
				{
					e[++y]=c[k];
				}
			}
			for(i=0;i<=x;i++)
			{
				for(k=0;k<=y;k++)
				{
					//printf("d[%d]=%d\te[%d]=%d\t",i,d[i],k,e[k]);
					s=(s+((d[i]+b[j])*(e[k]+b[j])))%1000000007;
					//s=(s+w)%1000000007;
				//	printf("w=%d\n",w);
				}
			}
		}
		printf("%lld\n",s);
		//printf("\ts=%d\tx=%d\ty=%d\n",s,x,y);
	}
	return 0;
}
