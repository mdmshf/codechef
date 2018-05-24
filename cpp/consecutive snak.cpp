#include <stdio.h>
#include <math.h>
int main()
{
	int t,n,l,a,b,pos,pos1,pos2,minl,minr,min,p,q,i,c,j,flag=0;int s[100000];long count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&n,&l,&a,&b);flag=0;count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
				q=abs(a-s[i]);
				p=abs(b-s[i]-l);
			if(i==0)
			{
					minl=q;minr=p;pos1=i;pos2=i;
			}
			else
			{
				if(q<minl)	{minl=q;pos1=i;}
				if(p<minr)  {minr=p;pos2=i;}
			}
		}
		if(minl<minr)
		{ 
			count+=abs(a-s[pos1]);a=a+l;s[pos1]=-1;flag=1;
		}
		else
		{
			count+=abs(b-s[pos2]);b=b-l;s[pos2]=-1;flag=-1;
		}
	//	printf("c%ld\ta=%d\tb=%d\n",count,a,b);
		for(i=0;i<n;i++)
		{
			if(s[i]!=-1)
			{
				if(flag==1)
				{c=0;
					for(j=0;j<n;j++)
					{	//c++;
						if(s[j]!=-1)
						{
							c++;
							p=abs(s[j]-a);if(c==1) {pos=j;min=p;}
							if(p<min) {min=p;pos=j;}
						}
					}
					count+=abs(s[pos]-a);a+=l;s[pos]=-1;
				}
				if(flag==-1)
				{	c=0;
					for(j=0;j<n;j++)
					{
						if(s[j]!=-1)
						{ c++;
							p=abs(s[j]-b-l);if(c==1) {pos=j;min=p;}
							if(p<min) {min=p;pos=j;}
						}
					}
					count+=abs(s[pos]-b);b-=l;s[pos]=-1;
				}
			}
			//printf("c%ld\ta=%d\tb=%d\n",count,a,b);
		}
		printf("%ld\n",count);
	}
}
