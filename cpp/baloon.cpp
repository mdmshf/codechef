#include <stdio.h>
#include <string.h>
int main()
{
	int t,n ,l,i,j,k,sum=0; char s[10000],cpy[10000],te;
	scanf("%d",&t);
	if(t>=1 && t<=100)
	while(t--)
	{
		scanf("%d %d",&n,&k);
		scanf("%s",&s);
			if(n>=1 && n<=10000 && k>=1 && k<=10000 )
		{
		l=strlen(s);
		strcpy(cpy,s);
		for(i=0;i<l;i++)
		{
			for(j=0;j<l;j++)
			{
				if(s[i] < s[j])
				{
					te=s[i];
					s[i]=s[j];
					s[j]=te;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<l;j++)
			if(cpy[j]==s[i])
			{
				sum+=j+1;
				//printf("%d\t",j);
			}
			printf("%c",s[i]);
		}
		printf(" %d\n",sum);
	}
	}
}
