#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,j,c,n,f;char a[150000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&a);
		n=strlen(a);c=0;
		for(i=1;i<150000;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[j]=='1' && (j-1>=0 || j+1<n))
				{
					a[j-1]='1';f=1;
					if(a[j+1]!='1')
					{
						a[j+1]=1;
						j++;
					}	
				}
			}
			if(f==1)
			{
			f=0;
			c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
