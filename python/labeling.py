import math
def f(a,b):
    ans=0
    for i in range(1, min(a, b)+1):
        if a%i==b%i==0:
            ans+=1
    return(ans)
for _ in range(int(input())):
    l=int(input())
    p=[[int(j) for j in input().split()]for _ in range(l)]
    m=[[0 for _ in range(l)]for _ in range(l)]
    for i in range(l):
        for j in range(i,l):
            if i!=j:
                m[i][j]=f(i+1,j+1)
             #   print(i+1,j+1,f(i+1,j+1))
                m[j][i]=m[i][j]
   # print(*m,sep='\n')
    for i in range(l):
        m[i].sort()
   # print("jctiyt\n\n",*m,sep='\n')
        p[i].sort()
    #print(p,m)
    aw=[0 for x in range(l)]
    for i in range(l):
        for j in range(l):
            if m[i]==p[j]:
                p[j]=-1
             #   print(i,j,m[i],p[j])
                aw[j]=i+1
                break
    print(*aw,sep='\n')
        
            
