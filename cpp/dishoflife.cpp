#include <stdio.h>
int main()
{
	int t,i,n,k,j,flag,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		int s[n][k+1];int a[k+1]={0};
		z=0;flag=0;
		//for(i=0;i<=100;i++)
		//a[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i][0]);
			for(j=1;j<=s[i][0];j++)
			scanf("%d",&s[i][j]);
		}
		for(i=0;i<n;i++)
		{
			for(j=1;j<=s[i][0];j++)
				if(a[s[i][j]]==0)
				{
					a[s[i][j]]++;
					z++;
				}
			if(z==k && i<n-1)
			{
				flag=1;
				break;
			}
		//	printf("z=%d\t",z);
		}
		if(flag==1) printf("some\n");
		else if(flag==0 && z==k) printf("all\n");
		else printf("sad\n");
		
	}
	return 0;
}
