#include <stdio.h>
#include <math.h>
int main()
{
	long long int n,k,ns;
	int t,m;
	double r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %d",&n,&k,&m);
		if(n%k==0)
			printf("%lld",n/k);
		else
		{
			r=(double)n/k;ns=ceil(r);
			printf("%lld",ns);
		}
	}
}

