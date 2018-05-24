#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,j,c=0;
	scanf("%d",&t);
	while(t--)
	{
		char s1[4][11],s2[4][11];c=0;
		for(i=0;i<4;i++) scanf("%s",&s1[i]);
		for(i=0;i<4;i++) scanf("%s",&s2[i]);
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(strcmp(s1[i],s2[j])==0)
					c++;
				//printf("s1=%s           s2=%s\n",s1[i],s2[j]);
			}
		}
		if(c>=2) printf("similar\n");
		else printf("dissimilar\n");
	}
	return 0;
}
