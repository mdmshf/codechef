#include <stdio.h>
int main()
{
	int a[2700];int i,n,b,s=0,c,t;float f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&f);
			a[i]=(int)f;
		}
		c=0;b=1;s=0;
		for(i=0;i<n;i++)
		{
			if(a[i]<(80*b))
			{
				c++;
				if(c<=2)
					s++;
			}
			else
			{
				c=0;
				i--;
				b++;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
