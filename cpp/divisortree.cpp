#include <stdio.h>
int main()
{
	long long int a,b,l=0,c,j,s=0,i,big;
	scanf("%lld %lld",&c,&b);
	long long int ar[2][b+1]={0};ar[0][1]=0;ar[1][1]=0;
	for(j=2;j<=b;j++)
	{
			ar[0][j]=0;
	for(i=1;i<=j/2;i++)
	{
	
		if(j%i==0)
		{
			ar[0][j]++;ar[1][j]=i;
		}
	}
	}
	//for(j=1;j<=b;j++)
	//	printf("%d\t%d\n",ar[0][j],ar[1][j]);
	for(j=c;j<=b;j++)
	{
		a=j;
	while(a>1)
	{
		
		s+=ar[0][a]+1;
		a=ar[1][a];
	//	printf("a=%ds=%d",a,s);
	}
	//printf("s1=%d",s);
	}
	printf("%lld\n",s);
	return 0;
}
