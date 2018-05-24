#include <stdio.h>
int main()
{
	int t,c1,c2,n,i;char s[2][100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",&s[0]);
		scanf("%s",&s[1]);
		c1=0;c2=0;
		for(i=0;i<n;i++)
		{
			if(s[0][i]=='*' || s[1][i]=='*')
				c1++;
			if(s[0][i]=='*' && s[1][i]=='*')
				c2++;
		}
		if(c1>0)	c1--;
		if(c2>0)	c2=1;
		printf("%d\n",(c1+c2));
	}
	return 0;
}
