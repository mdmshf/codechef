#include <stdio.h>
#include <string.h>
int fact(int z)
{
	int i,f=1;
	for(i=1;i<=z;i++)
	f*=i;
	return f;
}
int main()
{
	int t,a,c=0,i,j,l;char s[20];
	scanf("%d",&t);
	if(t>=1 && t<=1000)
	while(t--)
	{
		scanf("%s",&s);
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
		
	}
	printf("%d",a);
}
