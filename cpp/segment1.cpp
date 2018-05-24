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
		for(i=0;i<n;)
		{
			if(s[i]=='1')
			{
				i++;flag=1;
				while(s[i]=='1')
				{i++;}
				if(s[i]=='0')
				{
					while(s[i]=='0')
					{i++;}
					if(s[i]=='1')
					{
						printf("NO1\n");f=1;
						break;
					}
				}
			}
			if(s[i]=='0' && flag!=1)
			{
				i++;
				while(s[i]=='0')
				{i++;}
				if(i==n)
					{
						printf("NO2\n");f=1;
						break;
					}
			}
		}
		if(f==0)
		{
			printf("YES\n");
		}
	}
	return 0;
}
