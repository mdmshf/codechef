class Graph():
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [[0 for column in range(vertices)] for row in range(vertices)]
    def printSolution(self, dist, dest):
        #for node in range(self.V):
        print(dist[dest])
    def minDistance(self, dist, sptSet):
        min = 10000
        for v in range(self.V):
            if dist[v] < min and sptSet[v] == False:
                min = dist[v]
                min_index = v
        return min_index
    def dijkstra(self, src, dest):
        dist = [10000] * self.V
        dist[src] = 0
        sptSet = [False] * self.V
        for cout in range(self.V):
            u = self.minDistance(dist, sptSet)
            sptSet[u] = True
            for v in range(self.V):
             #   print(type(self.graph[u][v]),type(dist[u]),)
                if self.graph[u][v] > 0 and sptSet[v] == False and dist[v] > dist[u] + self.graph[u][v]:
                        dist[v] = dist[u] + self.graph[u][v]
        self.printSolution(dist, dest)
t=int(input())
for _ in range(t):
    n,q=(int(x) for x in input().strip().split())
    x=[]
    b=[]
    s=0
    for i in range(n):
        a=input().strip().split()
        b.append(a)
        s+=int(a[0])
    g=Graph(s)
    for i in range(n):
        a=b[i]
        for j in range(int(a[0])):
            x.append(str(i+1)+","+str(j+1))
        m=int(a[0])      
        for j in range(m):
            if(m==1):
                break
            elif(m==2):
                w=int(min(a[1],a[2]))
            else:
                w=int(a[j+1])
            g.graph[x.index(str(i+1)+","+str(j+1))][x.index(str(i+1)+","+str((j+2 if j+2<=m else 1)))]=w
            g.graph[x.index(str(i+1)+","+str((j+2 if j+2<=m else 1)))][x.index(str(i+1)+","+str(j+1))]=w
    for i in range(n):
        a=input().strip().split()
        g.graph[x.index(str(i+1)+","+a[0])][x.index(str(i+2 if i+2<=n else 1)+","+a[1])]=int(a[2])
        g.graph[x.index(str(i+2 if i+2<=n else 1)+","+a[1])][x.index(str(i+1)+","+a[0])]=int(a[2])
#    for i in range(len(x)):
#        for j in range(len(x)):
#            print(g.graph[i][j],end=" ")
#        print()
#    print(x)
    for i in range(q):
        a=input().strip().split()
        g.dijkstra(x.index(a[1]+","+a[0]),x.index(a[3]+","+a[2]));
                                                    
