#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,l,m,sn;char s[101];
	scanf("%d",&t);
	while(t--)
	{
		m=0;sn=0;
		scanf("%s",&s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='m')
			{
				m++;
				if(i==0)
				{
					if(s[i+1]=='s')
					{
						s[i+1]='a';i++;
					}
				}	
				else if(i==l-1)
				{
					if(s[i-1]=='s')
					{
						s[i-1]='a';sn--;
					}
				}
				else
				{
					if(s[i-1]=='s')
					{
						s[i-1]='a';sn--;
					}
					if(s[i-1]=='m'&&s[i+1]=='s')
					{
						s[i+1]='a';i++;
					}
				}
			}
			else
			{
				sn++;
			}
		}
		//printf("s=%d\tm=%d\t",sn,m);
		if(sn>m)
			printf("snakes\n");
		else if(sn<m)
			printf("mongooses\n");
		else
			printf("tie\n");
	}
	return 0;
}
