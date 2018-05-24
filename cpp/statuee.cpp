#include <stdio.h>
void swap(int a,int b)
{
	int t=a;a=b;b=t;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
long long int fact(int n)
{
	int i;long long int f =1;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
long long int ncr(int n,int r)
{
	long long int q;
	q=(fact(n)/(fact(r)*fact(n-r)));
	return q;
}
int main()
{
	int t,i,n,k,c,j;int a[100000];long long int s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		heapSort(a,n);
		s=0;c=1;j=0;
		for(i=0;i<2*n;i++)
		{
			printf("%d",a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==j)
			{
				c++;
			}
			else
			{
				for(k=c;k>=1;k--)
				{
					s+=ncr(c,k);
				}
				c=1;j=a[i];
			}
		}
		printf("%lld\n",s);
	}
	return 0;
}
