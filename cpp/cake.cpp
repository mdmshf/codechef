#include <stdio.h>
int main()
{
	int t,i,n,j,d,flag,f;
	
	scanf("%d",&t);
	while(t--)
	{
		flag=0;f=0;
		scanf("%d %d",&n,&d);
		char s1[n+1];char s2[n+1];
		scanf("%s",&s1);
		scanf("%s",&s2);
		for(i=0;i<n;i++)
		{
			f=0;
			for(j=0;j<n;j++)
			{
				if(s1[i]==s2[j])
				{
					f=1;
					if((i-j)%d==0  ||  (j-i)%d==0 )
					{
						flag=1;
						break;
					}
						
						
					else
					{
						flag=0;
						break;
					}
				}	
			}
			if(f==0)
				flag=0;
			if(flag==0)
			break;
		}
		if(flag==0)
		printf("NO\n");
		else
		printf("YES\n");
	}
	return 0;
}
