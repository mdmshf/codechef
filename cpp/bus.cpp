#include <stdio.h>
int lcm(int a , int b)
{
	int i,gcd,lcm;
	 for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    lcm = (a*b)/gcd;
    return lcm;
}
int main()
{
	int t,x,y,l;
	scanf("%d",&t);
	if(t>=1 && t<=1000)
	while(t--)
	{
		scanf("%d %d",&x,&y);
		if(x>=1 && x<=10000 && y>=1 && y<=10000 )
		{
		l=lcm(x,y);
		printf("%d %d\n",l/x-1,l/y-1);
		}
	}
	return 0;
}
