#include <stdio.h>
int main()
{
	int c=0,n,k,d,q,i,j,m,l;char ch[100000];int a[100000];
	scanf("%d %d %d",&n,&k,&q);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&d);
		if(d==1)
			a[++c]=i;
	}
	scanf("%s",&ch);
	for(i=0;i<q;i++)
	{
		if(ch[i]=='!')
		{
			if(a[c]==n)
			{
				for(j=c;j>1;j--)
				{
					a[j]=a[j-1]+1;
				}
				a[1]=1;
			}
			else
			{
				for(j=1;j<=c;j++)
					a[j]+=1;
			}
		//	for(j=1;j<=c;j++)
		//		printf("\t%d\t",a[j]);
		//	printf("\n");
		}
		else
		{	
			m=0;
			for(j=1;j<=c;j++)
			{
				for(l=1;l+j<=c && a[l+j]-a[j]<k ;l++);
				if(l>m)
					m=l;
			}
			printf("%d\n",m);
		}
	}
	return 0;
}
