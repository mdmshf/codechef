#include <stdio.h>
int main()
{
	int t,a,b,i,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
		}
		if(n%2==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
