#include <stdio.h>
#include <math.h>
int sq(float);
int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	long long int x,y,z,i,j,k;
	for(i=472226642630;i<=472226642635;i++)
	{
		for(j=463877982990;j<463877982995;j++)
		{
			for(k=452392145400;k<452392145410;k++)
			{
				printf("%lld\t%lld\t%lld\t\t\t",i,j,k);
				printf("%f\tASDF   ",sqrt(j-k));
			if(	sq(sqrt(i+j))==1 && sq(sqrt(i+k))==1 && sq(sqrt(i-j))==1 && sq(sqrt(i-k))==1 && sq(sqrt(j+k))==1 &&	sq(sqrt(j-k))==1    )
				{
					printf("lld lld lld\n",i,j,k);
					n--;
					if(n==0)
					break;
				}printf("\n");
			}
		}
	}
	return 0;	
}
int sq(float c){
	int i=10;
	printf("%f\t hell    ",c);
	while(c>0){
	if(c==1.0 || c==2.0 || c==3.0 || c==4.0 ||c==5.0||c==6.0||c==7.0||c==8.0||c==9.0||c==0.0)	
	i=20;
	c=c/10;
}
if(i==20)
return 1;
else
return 0;
}
