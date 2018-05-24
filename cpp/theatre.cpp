#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 	int t;
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
        t=arr[i];
        arr[i]=arr[largest];
        arr[largest]=t;
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(int arr[], int n)
{
	int t;
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        //swap(arr[0], arr[i]);
        t=arr[i];
        arr[i]=arr[0];
        arr[0]=t;
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
int main()
{
	int t,i,j,hp,m,n,temp,flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=1;
		scanf("%d %d",&n,&m);
		int a[m*n];
		for(i=1;i<m*n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&hp);
		a[0]=hp;
		/*for(i=0;i<m*n;i++)
		{
			for(j=0;j<m*n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<m*n;i++)
		{
				//printf("%d\t",a[i]);
		j=0;
			while(j<m){
			printf("%d\t",a[i]);i++;
			j++;}
			printf("\n");i--;
			
		}
		*/
		heapSort(a,m*n);
		for(i=0;i<m*n;i++)
		{
			if(a[i]==hp)
			{
				while(i>0)
				{
					i=i-m;
					if(hp<=a[i] && i>=0)
						flag=0;
				}
				break;
			}
		}
		if(flag==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
