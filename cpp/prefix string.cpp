#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,l,c=0;char s[100000];
	scanf("%s",&s);
	l=strlen(s);t=1;
	//printf("%d         ",l);
	for(i=l-1;i>=0;i--)
	{
		if(t==1)
		{
			if(s[i]=='1')
			{
				c++;
				t=2;
			}
		}
		else
		{
			if(s[i]=='0')
			{
				c++;
				t=1;
			}
		}
	}
	printf("%d",c);
	return 0;
}
