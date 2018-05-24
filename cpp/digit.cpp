#include <stdio.h>
int main()
{
	long long int t,a,b,i,j,f,c,flag,d;long long int l[10],q[10]={0};
	scanf("%lld",&t);
	while(t--)
	{
		f=0;
		scanf("%lld %lld",&a,&b);
		for(i=0;i<10;i++)
		{
			scanf("%lld",&l[i]);
			if(l[i]!=0)
				f=1;
		}
		c=0;
		if(f==1)
		for(i=a;i<=b;i++)
		{
			j=i;flag=0;
			while(j>0)
			{
				d=j%10;
				q[d]++;
				j=j/10;
			}
			for(j=0;j<10;j++)
			{
				if(q[j]==l[j])
				{
					flag=11;
				}
				q[j]=0;
			}
			if(flag!=11)
				c++;
		//	printf("%d",i);
		}
		else
			c=b-a+1;
		printf("%lld\n",c);
	}
	return 0;
}
