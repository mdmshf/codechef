#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,c1,c2,n;char s[51];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		n=strlen(s);
		c1=0;c2=0;
		for(i=0;i<n;)
		{
			if(s[i]=='U')
			{
				c1++;
				while(s[i]=='U')
				{
					i++;
				}
			}
			else
			{
				c2++;
				while(s[i]=='D')
				{
					i++;
				}
			}
		}
		if(c1<c2)
			printf("%d\n",c1);
		else
			printf("%d\n",c2);
	}

	return 0;	
}
