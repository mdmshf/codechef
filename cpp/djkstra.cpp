#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<math.h>
#define IN 999
int N;
int cost[10][10];
int dijkstra(int source, int target);
int dijsktra(int source,int target)
{
    int dist[N],prev[N],selected[N]={0},i,m,min,start,d,j;
    char path[N];
    for(i=1;i< N;i++)
    {
        dist[i] = IN;
        prev[i] = -1;
    }
    start = source;
    selected[start]=1;
    dist[start] = 0;
    while(selected[target] ==0)
    {
        min = IN;
        m = 0;
        for(i=1;i< N;i++)
        {
            d = dist[start] +cost[start][i];
            if(d< dist[i]&&selected[i]==0)
            {
                dist[i] = d;
                prev[i] = start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    }
    start = target;
    j = 0;
    while(start != -1)
    {
        path[j++] = start+65;
        start = prev[start];
    }
    path[j]='\0';
    strrev(path);
   // printf("%s", path);
    return dist[target];
}
int main()
{
    int i,j,n,t,co,r,k,e,a,b;
    int source, target,x,y;
    scanf("%d",&t);
    while(t--)
    {
	scanf("%d %d %d %d %d",&N,&k,&r,&e,&source);
    for(i=1;i<=N;i++)
    for(j=1;j<=N;j++)
    cost[i][j] = IN;
    for(x=1;x<k;x++)
    {
        for(y=x+1;y<k;y++)
        {
            cost [x][y] = cost[y][x] = r;
        }
        printf("\n");
    }
    for(x=1;x<=e;x++)
    {
    	scanf("%d %d %d",&a,&b,&r);
    	cost[a][b]=cost[b][a]=r;
	}
	for(x=1;x<=N;x++)
    {
        for(y=1;y<=N;y++)
        {
            printf("%d\t",cost[x][y]);
        }
        printf("\n");
    }
    for(x=1;x<=N;x++)
    {
    co = dijsktra(source,x);
    printf("%d\t",co);
	}
	printf("\n");
}
}

