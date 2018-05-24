#include <stdio.h>
#include <math.h>
long long int c=0;long long int q;
void subsequence(long long int arr[], int n)
{
	unsigned long long int p=1;
    unsigned int s= pow(2, n);
 	for (int i=1;i<s;i++)
    {
    	p=1;
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                //printf("%lld  ",arr[j]);
                p=p*arr[j];
                if(p>q)
                	break;
			}
        }
 			if(p<=q)
				c++; 
      //  printf("   p=%lld  c=%d\n",p,c);
    }
}
int main()
{
	int n,k,i;long long int a[30];
	scanf("%d %lld",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	subsequence(a,n);
	printf("%lld",c);c=0;
	return 0;
}
