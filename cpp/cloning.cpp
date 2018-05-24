#include <stdio.h>
int x[100001],y[100001];
void aHeapify(int n,int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 	if(l < n && x[l] > x[largest])
        largest = l;
 	if(r < n && x[r] > x[largest])
        largest = r;
 	if(largest != i)
    {
        int t=x[i];x[i]=x[largest];x[largest]=t;
 		aHeapify(n,largest);
    }
}
void aHeapSort(int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
        aHeapify(n, i);
	for (int i=n-1; i>=0; i--)
    {
        int t=x[0];x[0]=x[i];x[i]=t;
 		aHeapify(i,0);
    }
}
void cHeapify(int n,int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 	if(l < n && y[l] > y[largest])
        largest = l;
 	if(r < n && y[r] > y[largest])
        largest = r;
 	if(largest != i)
    {
        int t=y[i];y[i]=y[largest];y[largest]=t;
 		cHeapify(n,largest);
    }
}
void cHeapSort(int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
        cHeapify(n, i);
	for (int i=n-1; i>=0; i--)
    {
        int t=y[0];y[0]=y[i];y[i]=t;
 		cHeapify(i,0);
    }
}
int main()
{
	int t,te,n,q,i,j,a,b,c,d,flag,co,g,h;int arr[100001];
	scanf("%d",&te);
	while(te--)
	{
		scanf("%d %d",&n,&q);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<q;i++)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(b>d)
			{
				t=b;b=d;d=t;
				t=a;a=c;c=t;
			}
			g=-1;
			for(j=a;j<=b;j++)
			{
				x[++g]=arr[j-1];
			}
		//	printf("g=%d\n",g);
			g=-1;
			for(j=c;j<=d;j++)
			{
				y[++g]=arr[j-1];
			}
		//	printf("g=%d\n",g);
			aHeapSort(g+1);cHeapSort(g+1);
		/*	for(j=0;j<=g;j++)
				printf("%d\t",x[j]);
			printf("\n");
			for(j=0;j<=g;j++)
				printf("%d\t",y[j]);
			printf("\n");
		*/	co=0;flag=0;
			for(j=0;j<=g;j++)
			{
				if(x[j]!=y[j])
					co++;
				if(co==2)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
