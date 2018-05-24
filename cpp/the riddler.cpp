#include <stdio.h>
#include <math.h>
int main()
{
	int t,a,b,m,z,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&m);
		if(m==1)
		c=a;
		else if(m<a)
			if(a%m==0)
				c=a;
			else
				c=a+m-a%m;
		else if(m>=a && m<=b)
		c=m;
		else
		c=b;
		
		if(m==1)
		d=b;
		else if(m<a)
		d=b;
		else if(m>=a && m<=b)
		d=b-(m-b%m);
		else
		d=b;
		printf("%d %d\n",c,d);
	}
	return 0;
}
