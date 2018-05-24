#include <stdio.h>
#include <string.h>
int main()
{
	int n,u,i,j,a[100000][2];char s1[100000],s2[100000],s3[100000];
	scanf("%d %d",&n,&u);
	for(i=0;i<u;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n;i++)
		s1[i]='0';
	s1[i]='\0';
	for(i=0;i<u;i++)
	{
		for(j=0;j>n;j++)
		if(j>=a[i][0]-1 && j<a[i][1])
		{
			if(s1[j]==1)
				s2[j]=0;
			else
				s2[j]=1;
		}
		s2[j]='\0';
		if(strcmp(s1,s2)==1)
		{
			strcpy(s3,s1);
		}
		else
		{
			strcpy(s3,s2);
		}
		strcpy(s1,s2);
		printf("%s\n",s3);
	}
	printf("final %s",s3);
	return 0;
}
