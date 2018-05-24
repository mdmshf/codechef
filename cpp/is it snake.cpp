#include <stdio.h>
int main()
{
	int t,i,j,n,c=0,ch=0,c0=0,c1=0,c2=0,c3=0;char a[2][500];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);c=0,c0=0,c1=0,c2=0,c3=0,ch=0;
		for(i=0;i<2;i++)
		{
			scanf("%s",&a[i]);
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='#')
				{
					c=0;ch++;
					if(i==0&&j==0)
					{
						if(a[0][1]=='#') c++;
						if(a[1][0]=='#') c++;
					}
					else if((i==1&&j==0))
					{
						if(a[0][0]=='#') c++;
						if(a[1][1]=='#') c++;
					}
					else if(i==0&&j==n-1)
					{
						if(a[0][n-2]=='#') c++;
						if(a[1][n-1]=='#') c++;
					}
					else if(i==1&&j==n-1)
					{
						if(a[0][n-1]=='#') c++;
						if(a[1][n-2]=='#') c++;
					}
					else if(i==0)
					{
						if(a[0][j-1]=='#') c++;
						if(a[0][j+1]=='#') c++;
						if(a[1][j]=='#') c++;
					}
					else if(i==1)
					{
						if(a[0][j]=='#') c++;
						if(a[1][j-1]=='#') c++;
						if(a[1][j+1]=='#') c++;
					}
					else
					{
					}
					if(c==0) c0++;
					if(c==2) c2++;
					if(c==1) c1++;
					if(c>=3) c3++;
				}
			}
		}
		if(c0==1 && c1==0 && c2==0 && c3==0)
			printf("yes\n");
		else if(c1==2 && c3==0)
			printf("yes\n");
		else if(ch==2*n)
			printf("yes\n");
		else if(c1>2)
			printf("no\n");
		else
		{
			if(c1<2 && c3>0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
