#include <stdio.h>
int main()
{
	int t,n,a,b,i,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a=1;b=2;
		if(n==1)
		printf("1");
		else if(n==2)
		printf("1 2");
		else
		{
			printf("1 2 ");
			for(i=2;i<n;i++)
			{
				q=b;b=a+b+1;a=q;
				printf("%d ",b);
			}
		}
		printf("\n");
	}	
	return 0;
}
