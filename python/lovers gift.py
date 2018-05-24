import numpy
import copy
def dfs(start, path=[]):
  q=[start]
  ans=[]
  graph=copy.deepcopy(g)
  bankcopy=copy.deepcopy(bank)
  #visit=numpy.zeros(n+1)
  ans=-1
  secans=-1
  while q:
    v=q.pop(0)
   # visit[v]=1
    if v not in path:
      path=path+[v]
      q=graph[v]+q
      if q:
          for item in graph[q[0]]:
              if item in path:
                  graph[q[0]].remove(item)
    if bankcopy[v]==1:
        if v>ans:
            secans=ans
            ans=v
        elif v<ans and v>secans:
            secans=v
        for item in graph[v]:
            bankcopy[item]=1
      #  print(v,ans,secans)
  print(secans)
def addedge(a,b):
    if a not in g:
        g[a]=[b]
    else:
        g[a]+=[b]
    if b not in g:
        g[b]=[a]
    else:
        g[b]+=[a]
g={}
bank=[]
n=0
for _ in range(int(input())):
    n,m=[int(x) for x in input().split()]
    bank=numpy.zeros(n+1)
    for i in range(n-1):
        a,b=[int(x) for x in input().split()]
        addedge(a,b)
    for i in range(m):
        a,b=[int(x) for x in input().split()]
        if a==1:
            bank[b]=1
        else:
            dfs(b)
