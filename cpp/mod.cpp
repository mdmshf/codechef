#include <stdio.h>

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
        //swap(arr[i], arr[largest]);
 		int t=arr[i];
 		arr[i]=arr[largest];
 		arr[largest]=t;
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
       // swap(arr[0], arr[i]);
        int t=arr[0];
        arr[0]=arr[i];
        arr[i]=t;
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main()
{
	int t,m,n,i,j;int a[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		m=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	    heapSort(a, n);
		/*for(j=0;j<n-1;j++)
			{
				if((a[j]-a[j+1])>m  || (a[j+1]-a[j])>m)
					m=a[i]-a[j];
			}*/
	//	printf("%d\n",a[n-2]);
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
