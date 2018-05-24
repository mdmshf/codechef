#include <string.h>
#include <stdio.h>
int main()
{
	int t,i,f=0;char s[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!=s[strlen(s)-i-1])
			f=1;
		}
		if(f==1)
		printf("NO\n");
		else
		printf("YES\n");
	}
	return 0;
}
