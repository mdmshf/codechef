#include <stdio.h>
#include <math.h>

 int factor(int p,long int k)
{
	int i;int flag,fac=0;
	for(i=2;p>1;i++)
	{
		flag=0;
		
			while(p%i==0)
			{	p=p/i;
			flag=1;
			}
		
		if(flag==1)
		fac++;
		
	}
//	printf("%d\t%d\n",fac,k);
	if(fac==k)
	return 1;
	else
	return 0;
}
int main()
{
	 long int t,n,i,j,z,y,k;
	int total;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%ld %ld %ld",&z,&y,&k);
		n=y-z+1;total=0;
		for(i=z;i<=y;i++)
		{
				
				
				total+=factor(i,k);
				
		}
		printf("%d\n",total);
		/*for(i=0;i<n;i++)
		{
				j=0;
			//	printf("%d\t-\t",a[i]);
				while(fac[i][j]!=-1)
				{
					//	printf("%d  ",fac[i][j]);
						
						j++;
				}
				printf(" \n");
		}*/
	}
	return 0;
	
}
