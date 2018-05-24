#include <stdio.h>
int main()
{
	long long int t,i,n,b,s,m;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&b);s=0;
	/*	if(b>n/2)
			i=b;
		else
	*/		for(i=n/2;i%b!=0;i++);
		s=i*(n-i)/b;
			//if(s>m)
		printf("%lld\n",s);
	}
	return 0;
}
