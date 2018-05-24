#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,k,t,n,m,x,y,f,flag;
	char s[11];
	scanf("%d",&t);
	if(t>=1 && t<=1000)
	while(t--)
	{
		flag=0;
		scanf("%d %d",&n,&m);
		scanf("%s",&s);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				x=i;
				y=j;
				f=0;
				for(k=0;k<strlen(s);k++)
				{
					if(s[k]=='L')
					{
						y--;
					}
					else if(s[k]=='R')
					{
						y++;
					}
					else if(s[k]=='U')
					{
						x--;
					}
					else if(s[k]=='D')
					{
						x++;
					}
					else
					{
					}
					if(x<0 || x>=n || y<0 || y>=m)
					f++;
				}
				if(f==0)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		printf("safe\n");
		else
		printf("unsafe\n");
	}
	return 0;
}
