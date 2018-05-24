#include <stdio.h>
int main()
{
	char s[100001];int t,i,j,l,m,n;int a[100000],b[100000];double loc,c,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lf",&n,&k);
		scanf("%s",&s);
		for(i=0,j=-1,m=-1;i<n;i++)
		{
			if(s[i]=='a')
				a[++j]=i;
			if(s[i]=='b')
				b[++m]=i;
		}
		for(i=0;i<=10;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		for(i=0;i<=10;i++)
		{
			printf("b[%d]=%d\n",i,b[i]);
		}/*
		na=j+1;
	//	printf("j=%d m=%d\n",j,m);
		for(i=1;i<k;i++)
		{
			for(l=0;l<na;l++)
			{
				a[++j]=a[l]+(i*n);
			//	printf("q");
			}
		}
		nb=m+1;
		for(i=1;i<k;i++)
		{
			for(l=0;l<nb;l++)
			{
				b[++m]=b[l]+(i*n);
			//	printf("w");
			}
		}
		//printf("j=%d m=%d\n",j,m);
		/*for(i=0;i<=10;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		for(i=0;i<=10;i++)
		{
			printf("b[%d]=%d\n",i,b[i]);
		}*/
		c=0.0;
		for(i=0;i<=j;i++)
		{
			for(l=0;l<=m;l++)
			{
				if(a[i]<b[l])
					c+=1.0;
			}
		}
		printf("%lf\n",c);
		loc=(double)((k*(k+1))/2);
		c=c*loc;
		printf("%lf\n",c);
	}
	return 0;
}
