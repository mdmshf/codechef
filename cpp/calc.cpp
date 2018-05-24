#include <stdio.h>
int main()
{
	long long int t,i,n,b,s,m;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&b);m=0;
		i=(n/2)-1;
		do{
			s=i*(n-i)/b;
		//	printf("%d\t",s);
			if(s>m)
				m=s;
			i=i++;
		}while(i<=(n/2)+b);
		printf("%lld\n",m);
	}
	return 0;
} 
