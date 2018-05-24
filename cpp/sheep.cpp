#include <stdio.h>
int main()
{
	int t,n,f,c,i,j;
	scanf("%d",&t);
	while(t--)
	{
		j=1;
		scanf("%d",&n);
		int a[10] = {0};
		f=0;c=0;i=1;
		if(n==0)
		printf("Case #%d: INSOMNIA\n",j);
		else
		{
		while(f!=1)
		{
			c=n*i;
			while(c>0)
			{
				a[c%10]++;
				c/=10;
			}
			i++;
			if(a[0]>0&&a[1]>0&&a[2]>0&&a[3]>0&&a[4]>0&&a[5]>0&&a[6]>0&&a[7]>0&&a[8]>0&&a[9]>0)
				f=1;
		}
		printf("Case #%d: %d\n",j,n*(i-1));
		}
		j++;
	}
}
