#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,l,j,p,o,f,c=0;char s[100001];
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",&s);p=0;
		l=strlen(s);o=0;
		for(i=0;i<l-1;i++)
		{
			c=0;
			if(s[i]=='1')
			{
				o++;f=0;
				while(s[i+1]=='0')
				{
					i++;
					c++;
					f=1;
				}
				if(f==1)
				p+=o*(c+1);
			}
		}
		printf("%d\n",p);
	}
	return 0;
}
