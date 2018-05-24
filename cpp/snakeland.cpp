#include <stdio.h>
int main()
{
	int n,t,d,flag,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		flag=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&d);
			if(d!=i && i<=n/2+1)
				flag=1;
			if(d!=n-i+1 && i>n/2+1)
				flag=1;
		}
		if(flag!=1 && n%2==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
