#include <stdio.h>
int pow(int a,int b)
{
	int i,s=1;
	for(i=1;i<=b;i++)
		s=s*a;
		
	return s;
}
int main()
{
	int a,b,k,z,x,y,t,n,h,r,te,i,j,ca=1,right=0,left=0;int arr[2][1000];
			for(x=0;x<2;x++)for(y=0;y<=1000;y++)arr[x][y]=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		//h=(int)(log(n)/log(2));
		i=0;a=1;b=0;arr[0][1]=n;arr[0][2]=-1;
		while(k>0)
		{
			if(k<=pow(2,i))
			{
				for(x=1,y=1;x<=pow(2,i);x++)
				{
					if(x==k)
					{
					r=arr[b][y];
						k=0;
						break;
					}
					if(y+2>pow(2,i)) y=y+3-pow(2,i); else y=y+2;
				}
			}y=0;
			for(x=1;x<=pow(2,i);x++)
			{
				arr[a][++y]=(arr[b][x])/2;
				if(arr[b][x]%2==0) arr[a][++y]=(arr[b][x])/2-1;else arr[a][++y]=(arr[b][x])/2;
			}
			
			te=a;a=b;b=te;
			k=k-pow(2,i);
			i++;
		}
		right=r/2;
		if(r%2==0) left=r/2-1; else left=r/2;
		printf("Case #%d: %d %d\n",ca,right,left);
		ca++;
	}
}
