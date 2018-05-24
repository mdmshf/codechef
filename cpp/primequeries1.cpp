#include <stdio.h>
#define gc getchar
long long int a[100001];
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
long long int b[100001]={1,1,0};
void prime(long long int m,long long int n)
{
	long long int i,p;
	//for(i=0;i<=n;i++)
	//	printf("%lld\t",b[i]);
 	for (p=2;p*p<=n;p++)
    {
        if (b[p]==0)
        {
            for(i=2*p;i<=n;i+=p)
                b[i]=1;
        }
    }
    //printf("\n");
    //for (p=0; p<=n; p++)
       //if (b[p]==0)
    //      printf("%lld %lld\t",p,b[p]);
    //printf("\n");
}
int main()
{
	long long int t,l,r,x,y,i,n,q,result,exponent,j,number;
	//scanf("%lld",&n);
	n=rd();
	for(i=1;i<=n;i++)
	{
		//scanf("%lld",&a[i]);
		a[i]=rd();
	}
	scanf("%lld",&t);
	while(t--)
	{
		//scanf("%lld %lld %lld %lld",&l,&r,&x,&y);
		l=rd();r=rd();x=rd();y=rd();
		result= 0;
		prime(x,y);
     for(i=x;i<=y;i++ ) 
	 {
         if(b[i]==0) 
		 {
             for(j=l;j<=r;j++) 
			 {
                  number = a[j];
                  exponent = 0;
                  while( number % i == 0 ) {
                     exponent = exponent + 1 ;
                     number = number/i;
                  }
                  result = result + exponent;
              }
         }
     }
     printf("%lld\n",result);
	}
	return 0;
}
