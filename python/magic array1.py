t=int(input())
for _ in range(t):
    n=int(input())
    m=[]
    g=[]
    for _ in range(n):
        a=[int(x) for x in input().split()]
        g.append(a[1:])
        q=[]
        q.append(min(a[1:]))
        q.append(max(a[1:]))
        m.append(q)
    d=0
    f=-1
    s=0
    for i in range(2):
        for j in range(2):
            if(abs(m[n-2][j]-m[n-1][i])>d):
                d=abs(m[n-2][j]-m[n-1][i])
                f=j
                s=d*(n-1)
    #print(s,f)
    for i in range(n-2,0,-1):
        h=g[i].index(m[i][f])
      #  print("h=",h)
        if(h==len(g[i])-1):
            k=g[i][0]
        else:
            k=g[i][h+1]
     #   print("k=",k)
        d1=abs(k-m[i-1][0])
        d2=abs(k-m[i-1][1])
        s+=(max(d1,d2))*i
        f=0 if d1>d2 else 1
     #   print(k,s)
    print(s)
