#include <stdio.h>
#include <string.h>
int main()
{
	int t,n,i,m,d;//int a[100001]={0};
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		m=0;
	//	for(i=0;i<=n;i++)
	//		a[i]=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&d);
			if(d>m)
				m=d;
		}
	//	for(i=1;i<=n;i++)
	//	{
	//		if(a[i]==0)
	//			c++;
	//	}
		printf("%d\n",n-m);
	}
	return 0;
}
