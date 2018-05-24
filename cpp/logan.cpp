#include <stdio.h>

int main()
{
	int t,n,i,ans,a[100000];
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
				scanf("%d",&a[i]);
				ans+=a[i]-1;
		}
		if(n%2!=0)
		ans++;
		
		printf("%d\n",ans);
			
	}
}
