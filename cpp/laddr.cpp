#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if((b-a==1 && b/2==a/2+1) || (a-b==1 && a/2==b/2+1) || a-b==2 || b-a==2)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}
