#include <stdio.h>
int main()
{
	int t,n,m,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		if(n==1)
		{
			printf("%d\n",m);
		}
		if(n==2)
		{
			if(m%6==1)
				a=(4*(m/6))+2;
			else if(m%6==0)
				a=4*(m/6);
			else
				a=4*((m/6)+1);
			printf("%d\n",a);
		}
		if(n==3)
		
		{
			if(m%6==1)
				a=(4*(m/6))+3;
			else if(m%6==0)
				a=4*(m/6);
			else 
				a=4*((m/6)+1);
			printf("%d\n",a);
		}
	}
	return 0;
}
