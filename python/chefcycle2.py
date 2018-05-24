import scipy.sparse.csgraph
import numpy as np
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
    graph=np.zeros((s,s),dtype=np.int32)
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
            graph[x.index(str(i+1)+","+str(j+1))][x.index(str(i+1)+","+str(((j+1)%n)+1))]=w
            graph[x.index(str(i+1)+","+str(((j+1)%n)+1))][x.index(str(i+1)+","+str(j+1))]=w
    for i in range(n):
        a=input().strip().split()
        graph[x.index(str(i+1)+","+a[0])][x.index(str(((i+1)%n)+1)+","+a[1])]=int(a[2])
        graph[x.index(str(((i+1)%n)+1)+","+a[1])][x.index(str(i+1)+","+a[0])]=int(a[2])
#    for i in range(len(x)):
#        for j in range(len(x)):
#            print(g.graph[i][j],end=" ")
#        print()
    z=scipy.sparse.csgraph.shortest_path(graph,'auto',False,False,False,False,None)
#    for i in range(len(x)):
 #       for j in range(len(x)):
  #          print(int(z[i][j]),end=" ")
   #     print()
    for i in range(q):
        a=input().strip().split()
        print(int(z[x.index(a[1]+","+a[0])][x.index(a[3]+","+a[2])]))
