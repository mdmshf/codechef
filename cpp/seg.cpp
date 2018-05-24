#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,n,f,flag;char s[100001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		n=strlen(s);f=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
				{
					f=i;
					break;
				}
		}
		for(i=n-1;i>=0;i--)
		{
			if(s[i]=='1')
				{
					flag=i;
					break;
				}
		}
		for(i=f;i<=flag;i++)
		{
			if(s[i]=='0')
			{
				printf("NO\n");f=-1;
				break;
			}
		}
		if(f!=-1)
		{
			printf("YES\n");
		}
	}
	return 0;
}
