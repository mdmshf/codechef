#include <stdio.h>
int main()
{
	int t;
	long long int a,b,i,time,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&time);
	//	if(time<3)
		i=0;
	//	else
		for(i=1;;i++)
		{
			ans=(i*i)+(a*i)+b;
			if(ans>=time)
				break;
		}
		printf("%lld\n",i);
	}
}
