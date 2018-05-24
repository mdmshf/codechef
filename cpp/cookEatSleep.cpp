#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,c,e,sl,f,n;char s[100001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		n=strlen(s);f=0;sl=0,c=0,e=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='C')
			{
				if(sl!=1 && e!=1)
				c=1;
				else
				{
					f=1;
					break;
				}
			}
			else if(s[i]=='E')
			{
				if(sl!=1)
				e=1;
				else
				{
					f=1;
					break;
				}
			}
			else if(s[i]=='S')
			{
				sl=1;
			}
			else
			{
			}
		}
		if(f==1) printf("no\n");else printf("yes\n");
	}
	return 0;
}
