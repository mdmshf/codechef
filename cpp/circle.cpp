#include <stdio.h>
int main()
{
	int t,n,k,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		if(k>n/2+1)
		ans=n-k+1;
		else
		ans=k-1;
		printf("%d\n",ans);
	}
	return 0;
}
