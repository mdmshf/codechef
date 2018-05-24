#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int size, int a[])
{
	int s=0;int i,j,k,t;
	for(i=0;i<size;i++)for(j=0;j<size;j++)if(a[i]>a[j]){t=a[i];a[i]=a[j];a[j]=t;}
	
	k=0;
	while(k<size)
	{
		if(a[k]!=-1)
		{
			if(k<size-1 and a[k]!=-1)
			{
				s+=ceil(a[k]/2);
				a[k+1]=a[k+1]+(a[k]-ceil(a[k]/2));
				if(a[k+1]>1000) a[k+1]=-1;
				a[k]=-1;
			}
			else
			{
				s+=a[k];
				break;
			}
			k+=1;
		}
		printf("s=",s);
	}	
	printf("s=",s);
}
int main()
{
	int size;int a[1000];int i;
	printf("Enter size of array  : ");
	scanf("%d",&size);
	printf("Enter array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(size,a);
	return 0;
}
