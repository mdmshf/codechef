#include <stdio.h>
int main()
{
	int t,a,i,c,n,flag;long long int s,r,v;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);s=0;c=0;r=0,v=0,flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>=0)
			{
				c++;r+=a;flag=0;
			}
			else
			{
				v+=r*c;v+=a;c=0;r=0;flag=1;
			}
		}
		if(flag==0)
			v+=r*c;
		printf("%lld\n",v);
	}
	return 0;
}
