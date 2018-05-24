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
		a=0;
		scanf("%s",&s);
		l=strlen(s);
		if(l<=20)
		for(i=0;i<l;i++)
		{
			c=0;
			for(j=i;j<l;j++)
			{
				if(s[j]>s[i])
					c++;
			}
			//printf("%d\n",c);
			a+=fact(l-i-1)*c;
		}
			printf("%d\n",a);
	}

	return 0;
}
