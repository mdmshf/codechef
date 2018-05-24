#include <stdio.h>
int  main()
{
	int t,i,j,k,l,n,a,b,c,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&l,&n);
		char s[l+1];q=0;
		char ar[n][n];
		scanf("%s",&s);
		for(i=0;i<n;i++)
		scanf("%s",ar[i]);
		//printf("s=%c\n",s[0]);
		for(i=0;i<n;i++)
		{
			a=i;
			for(j=0;j<n;j++)
			{
				a=i,b=j;c=0;
				if(ar[i][j]!='#')
				for(k=0;k<l;k++)
				{
					//printf("%c s[k]=%c ",ar[a][b],s[k]);
					if(s[k]=='L')
					{
						if(b!=0 && ar[a][b-1]!='#')
						{c++;b--;//printf("+");
						}
						else
						{break;}
					}
					else if(s[k]=='R')
					{
						
						if(b!=n-1 && ar[a][b+1]!='#')
						{c++;b++;//printf("-");
						}
						else
						{break;}
					}
					else if(s[k]=='U')
					{
						if(a!=0 && ar[a-1][b]!='#')
						{c++;a--;//printf("*");
						}
						else
						{break;}
					}
					else
					{
						if(a!=n-1 && ar[a+1][b]!='#')
						{c++;a++;//printf("/");
						}
						else
						{break;}
					}
					//printf("i=%dj=%dk=%d",i,j,k);
				}
				q=q^c;
			//	printf("\tcount at %d%d=%d\n",c);
			}
		}
		printf("%d\n",q);
	}
	return 0;
}
