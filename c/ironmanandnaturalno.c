#include <stdio.h>
#include <stdlib.h>
int main()
{
	int e,i=0,j,s,k;
	scanf("%d",&e);
	int l[100],o[100];
	//printf("hello\n");
	while(i<e)
	{
	//	printf("iron%d\t",i);
		scanf("%d",&l[i]);
	//	printf("\nnanna%d",i);
		scanf("%d",&o[i]);
	//	printf("\nnew%d",i);
		i++;
	//	printf("\nnew%d",i);
	}
	k=0;
	while(k<e)
	{
		if(l[k]>=1 && l[k]<=109 && o[k]>=1 &&o[k]<=10000)
		{
		s=0;
		for(i=1;i<=l[k];i++)	
		for(j=1;j<l[k]    ;j++)
		if((i+j)%o[k]==0)
		s++;
		printf("%d\n",s);
		}
		else
		printf("wrong input");
		k++;
	}
}
