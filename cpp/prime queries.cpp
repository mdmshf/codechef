#include <stdio.h>
#define gc getchar
long long int rd() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int prime(long long int a)
{
	long long int i,c=0;
	for(i=2;i<=a/2;i++)
		if(a%i==0)
			c++;
	if(c==0)
	return 1;
	else
	return 0;
}
int main()
{
	long long int t,l,r,x,y,i,n,q,res,e,j,num,a[100001];
	//scanf("%lld",&n);
	n=rd();
	for(i=1;i<=n;i++)
	{
		//scanf("%lld",&a[i]);
		a[i]=rd();
	}
	//scanf("%lld",&t);
	t=rd();
	while(t--)
	{
		//scanf("%lld %lld %lld %lld",&l,&r,&x,&y);
		l=rd();r=rd();x=rd();y=rd();
		res= 0;
     for(i=x;i<=y;i++ ) 
	 {
         if(prime(i)==1) 
		 {
             for(j=l;j<=r;j++) 
			 {
                  num=a[j];
                  e=0;
                  while(num%i==0) 
				  {
                     e=e+1 ;
                     num=num/i;
                  }
                  res=res+e;
              }
         }
     }
     printf("%lld\n",res);
	}
}
