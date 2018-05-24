#include <stdio.h>
#include <limits.h>
  
// Number of vertices in the graph
int V=0;
  //#define V 5
  int graph[1000][1000];
 void dijkstra(int src);
 int minDistance(int dist[], bool sptSet[]);
 int printSolution(int dist[], int );
int main()
{
	int t,k,x,m,n,s,a,b,c,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d %d",&n,&k,&x,&m,&s);
		V=n;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			graph[i][j]=0;
			if(i<k && j<k && i!=j)
				graph[i][j]=graph[j][i]=x;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			graph[a-1][b-1]=c;
			graph[b-1][a-1]=c;
		}
	/*	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",graph[i][j]);
			}
			printf("\n");
		}*/
		dijkstra(s-1);
	}
	return 0;
}
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance( long int dist[], bool sptSet[])
{
   // Initialize min value
   long int min = LLONG_MAX, min_index;
  
   for (int v = 0; v < V; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;
  
   return min_index;
}
  
// A utility function to print the constructed distance array
int printSolution( long int dist[], int n)
{
   //printf("Vertex   Distance from Source\n");
   for (int i = 0; i < V; i++)
      printf("%ld ",dist[i]);
      printf("\n");
}
  
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int src)
{
    long int dist[V];     // The output array.  dist[i] will hold the shortest
                      // distance from src to i
  
     bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
                     // path tree or shortest distance from src to i is finalized
  
     // Initialize all distances as INFINITE and stpSet[] as false
     for (int i = 0; i < V; i++)
        dist[i] = LLONG_MAX, sptSet[i] = false;
  
     // Distance of source vertex from itself is always 0
     dist[src] = 0;
  
     // Find shortest path for all vertices
     for (int count = 0; count < V-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in first iteration.
      long int u = minDistance(dist, sptSet);
  
       // Mark the picked vertex as processed
       sptSet[u] = true;
  
       // Update dist value of the adjacent vertices of the picked vertex.
       for (int v = 0; v < V; v++)
  
         // Update dist[v] only if is not in sptSet, there is an edge from 
         // u to v, and total weight of path from src to  v through u is 
         // smaller than current value of dist[v]
         if (!sptSet[v] && graph[u][v] && dist[u] != LLONG_MAX 
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }
  
     // print the constructed distance array
     printSolution(dist, V);
}
