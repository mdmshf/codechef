#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50],i,n,max;
	
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value %d ",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])	
		{
			max=a[i];
		}
	//	printf("a[%d]=%d\tmax=%d\n",i,a[i],max);
	}	
	printf("max=%d",max);
	
	return 1;
}

