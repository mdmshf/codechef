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
long long int a[100000],b[100000],c[100000];/*
void aHeapify(long long n,long long int i)
{
    long long int largest = i;
    long long int l = 2*i + 1;
    long long int r = 2*i + 2;
 	if(l < n && a[l] > a[largest])
        largest = l;
 	if(r < n && a[r] > a[largest])
        largest = r;
 	if(largest != i)
    {
        long long int t=a[i];a[i]=a[largest];a[largest]=t;
 		aHeapify(n,largest);
    }
}
void aHeapSort(long long int n)
{
	for (long long int i = n / 2 - 1; i >= 0; i--)
        aHeapify(n, i);
	for (long long int i=n-1; i>=0; i--)
    {
        long long int t=a[0];a[0]=a[i];a[i]=t;
 		aHeapify(i,0);
    }
}
void cHeapify(long long n,long long int i)
{
    long long int largest = i;
    long long int l = 2*i + 1;
    long long int r = 2*i + 2;
 	if(l < n && c[l] > c[largest])
        largest = l;
 	if(r < n && c[r] > c[largest])
        largest = r;
 	if(largest != i)
    {
        long long int t=c[i];c[i]=c[largest];c[largest]=t;
 		cHeapify(n,largest);
    }
}
void cHeapSort(long long int n)
{
	for (long long int i = n / 2 - 1; i >= 0; i--)
        cHeapify(n, i);
	for (long long int i=n-1; i>=0; i--)
    {
        long long int t=c[0];c[0]=c[i];c[i]=t;
 		cHeapify(i,0);
    }
}*/
int main()
{
	long long int t,p,q,r,x,y,i,j,k,s,w;
	//scanf("%lld",&t);
	t=rd();
	while(t--)
	{
		s=0;
		//scanf("%lld %lld %lld",&p,&q,&r);
		p=rd();q=rd();r=rd();
	//	printf("p=%lld\tq=%lld\tr=%lld\n",p,q,r);
		for(i=0;i<p;i++)
			a[i]=rd();
			//scanf("%lld",&a[i]);
	//	aHeapSort(p);
	/*	for(i=0;i<p;i++)
			printf("%lld\t",a[i]);
		printf("\n");
	*/	for(i=0;i<q;i++)
			b[i]=rd();
			//scanf("%lld",&b[i]);
	/*	for(i=0;i<q;i++)
			printf("%lld\t",b[i]);
		printf("\n");
	*/	for(i=0;i<r;i++)
			c[i]=rd();
			//scanf("%lld",&c[i]);
	//	cHeapSort(r);
	/*	for(i=0;i<r;i++)
			printf("%lld\t",c[i]);
		printf("\n");
	*/	for(j=0;j<q;j++)
			for(i=0;i<p;i++)
			if(a[i]<=b[j])
				for(k=0;k<r;k++)
				if(c[k]<=b[j])
					s=(s+((a[i]+b[j])*(c[k]+b[j])))%1000000007;
		printf("%lld\n",s);
	}
	return 0;
}
