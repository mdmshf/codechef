#include <stdio.h>
int main()
{
	int t;long long int x,y,n,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		n=x+y;
		s=n*(n+1)/2;
		s+=n+1-y;
		printf("%lld\n",s);
	}
	return 0;
}
