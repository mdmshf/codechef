from collections import defaultdict
import sys
class Heap():
    def __init__(self):
        self.array = []
        self.size = 0
        self.pos = []
    def newMinHeapNode(self, v, dist):
        minHeapNode = [v, dist]
        return minHeapNode
    def swapMinHeapNode(self,a, b):
        t = self.array[a]
        self.array[a] = self.array[b]
        self.array[b] = t
    def minHeapify(self, idx):
        smallest = idx
        left = 2*idx + 1
        right = 2*idx + 2
        if left < self.size and self.array[left][1] < self.array[smallest][1]:
            smallest = left
        if right < self.size and self.array[right][1] < self.array[smallest][1]:
            smallest = right
        if smallest != idx:
            self.pos[ self.array[smallest][0] ] = idx
            self.pos[ self.array[idx][0] ] = smallest
            self.swapMinHeapNode(smallest, idx)
            self.minHeapify(smallest)
    def extractMin(self):
        if self.isEmpty() == True:
            return
        root = self.array[0]
        lastNode = self.array[self.size - 1]
        self.array[0] = lastNode
        self.pos[lastNode[0]] = 0
        self.pos[root[0]] = self.size - 1
        self.size -= 1
        self.minHeapify(0)
        return root
    def isEmpty(self):
        return True if self.size == 0 else False
    def decreaseKey(self, v, dist):
        i = self.pos[v]
        self.array[i][1] = dist
        while i > 0 and self.array[i][1] < self.array[int((i - 1) / 2)][1]:
            self.pos[ self.array[i][0] ] = (i-1)/2
            self.pos[ self.array[int((i-1)/2)][0] ] = i
            self.swapMinHeapNode(i, int((i - 1)/2) )
            i = int((i - 1) / 2);
    def isInMinHeap(self, v):
        if self.pos[v] < self.size:
            return True
        return False
def printArr(dist, n,dest):
    #for i in range(n):
    print(dist[dest])
class Graph():
    def __init__(self, V):
        self.V = V
        self.graph = defaultdict(list)
    def addEdge(self, src, dest, weight):
        newNode = [dest, weight]
        self.graph[src].insert(0, newNode)
        newNode = [src, weight]
        self.graph[dest].insert(0, newNode)
    def dijkstra(self, src,dest):
        V = self.V  # Get the number of vertices in graph
        dist = []
        minHeap = Heap()
        for v in range(V):
            dist.append(10000)
            minHeap.array.append( minHeap.newMinHeapNode(v, dist[v]) )
            minHeap.pos.append(v)
        minHeap.pos[src] = src
        dist[src] = 0
        minHeap.decreaseKey(src, dist[src])
        minHeap.size = V;
        while minHeap.isEmpty() == False:
            newHeapNode = minHeap.extractMin()
            u = newHeapNode[0]
            for pCrawl in self.graph[u]:
                v = pCrawl[0]
                if minHeap.isInMinHeap(v) and dist[u] != 10000 and pCrawl[1] + dist[u] < dist[v]:
                        dist[v] = pCrawl[1] + dist[u]
                        minHeap.decreaseKey(v, dist[v])
        printArr(dist,V,dest)
# Driver program to test the above functions 
t=int(input())
for _ in range(t):
    n,q=(int(x) for x in input().split())
    x=[]
    b=[]
    s=0
    for i in range(n):
        a=input().split()
        b.append(a)
        s+=int(a[0])
    graph=Graph(s)
    for i in range(n):
        a=b[i]
        for j in range(int(a[0])):
            x.append(str(i+1)+","+str(j+1))
        m=int(a[0])      
        for j in range(m):
            if(m==2):
                w=int(min(a[1],a[2]))
            else:
                w=int(a[j+1])
            graph.addEdge(x.index(str(i+1)+","+str(j+1)),x.index(str(i+1)+","+str((j+2 if j+2<=m else 1))),w)
            graph.addEdge(x.index(str(i+1)+","+str((j+2 if j+2<=m else 1))),x.index(str(i+1)+","+str(j+1)),w)
    for i in range(n):
        a=input().split()
        graph.addEdge(x.index(str(i+1)+","+a[0]),x.index(str(i+2 if i+2<=n else 1)+","+a[1]),int(a[2]))
        graph.addEdge(x.index(str(i+2 if i+2<=n else 1)+","+a[1]),x.index(str(i+1)+","+a[0]),int(a[2]))
#    for i in range(len(x)):
#        for j in range(len(x)):
#            print(g.graph[i][j],end=" ")
#        print()
    for i in range(q):
        a=input().split()
        graph.dijkstra(x.index(a[1]+","+a[0]),x.index(a[3]+","+a[2]));
                                                    
