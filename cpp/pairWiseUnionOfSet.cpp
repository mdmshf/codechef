#include <stdio.h>
int main()
{
	int t,n,k,i,j,l,c,flag,temp;//,a[251][251],b[251];
	scanf("%d",&t);
	while(t--)
	{
		int a[2501][2501]={0};
		c=0;
		scanf("%d %d",&n,&k);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i][0]);
			for(j=1;j<=a[i][0];j++)
			{
				scanf("%d",&temp);
				a[i][temp]=1;
			}
		}
	/*	for(i=0;i<=n;i++)
		{
		for(j=0;j<=k;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}printf("\n");
		}*/
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				/*for(l=0;l<=k;l++)
				{
					printf("b[%d]=%d\t",l,b[l]);
				}printf("\n");*/
				if(i!=j)
				{
					int b[2501]={};flag=0;
					for(l=1;l<=k;l++)
					{
						if(a[i][l]==1)
							b[l]=1;
							
					}
				/*	for(l=0;l<=k;l++)
					{
						printf("b[%d]=%d\t",l,b[l]);
					}printf("\n");*/
					for(l=1;l<=k;l++)
					{
						if(a[j][l]==1)
							b[l]=1;
					}
				/*	for(l=0;l<=k;l++)
					{
						printf("b[%d]=%d\t",l,b[l]);
					}printf("\n");*/
					for(l=1;l<=k;l++)
						if(b[l]==0)
							flag=1;
					if(flag!=1)
						c++;
				}
			}
		}
		printf("%d\n",c/2);
	}
	return 0;
}
