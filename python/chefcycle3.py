t=int(input())
for _ in range(t):
    n,q=(int(x) for x in input().strip().split())
    a=[[]]
    c=[[]]
    for i in range(n):
        b=[int(x) for x in input().strip().split()]
        b.append(sum(b)-b[0])
        a.append(b)
        c.append([])
    d=[[]]
    for i in range(n):
        b=[int(x) for x in input().strip().split()]
        d.append(b)
        c[i+1].append(b[0])
        c[((i+1)%n)+1].append(b[1])
    h=[-1]
    c[1][0],c[1][1]=c[1][1],c[1][0]
    for i in range(1,n+1):
        f=a[i][0]
        e=a[i][1:f+1]
   #     g=sum(e[min(c[i][0],c[i][1])-1:max(c[i][1],c[i][0])-1])
        g=0
        for temp in range(min(c[i][0],c[i][1])-1,max(c[i][1],c[i][0])-1):
            g+=e[temp]
        h.append(min(g,a[i][a[i][0]+1]-g))
    b=[[-1 for _ in range(n+1)]for _ in range(n+1)]
#    for j in range(1,n+1):
 #       r=0
 #       s=0
  #      for i in range(j+1,n+j):
   #         s+=d[i-1 if i-1<=n else (i-1)%n][2]+r
      #      print(r,d[i-1 if i-1<=n else (i-1)%n][2],s)
    #        b[j][i if i<=n else (i)%n]=s
         #   b[i if i<=n else (i)%n][j]=s
     #       r=h[i if i<=n else i%n]
     #   print(b)
 #   print(a,"\n",c,"\n",d,"\n",h,"\n",b)
    for _ in range(q):
        v1,c1,v2,c2=(int(x) for x in input().strip().split())
        if(b[c1][c2]==-1):
            j=c1
            r=0
            s=0
            for i in range(j+1,n+j):
                s+=d[i-1 if i-1<=n else (i-1)%n][2]+r
                b[j][i if i<=n else (i)%n]=s
              #  print(h)
                r=h[i if i<=n else i%n]
        if(b[c2][c1]==-1):
            j=c2
            r=0
            s=0
            for i in range(j+1,n+j):
                s+=d[i-1 if i-1<=n else (i-1)%n][2]+r
                b[j][i if i<=n else (i)%n]=s
             #   print("FR",h)
                r=h[i if i<=n else i%n]
        e=a[c1][1:a[c1][0]+1]
   #     g=sum(e[min(v1,c[c1][1])-1:max(v1,c[c1][1])-1])
        g=0
        for temp in range(min(v1,c[c1][1])-1,max(v1,c[c1][1])-1):
            g+=e[temp]
#        print(g)
        g=min(g,a[c1][a[c1][0]+1]-g)
 #       print(g)
        g+=b[c1][c2]
  #      print(g)
        e=a[c2][1:a[c2][0]+1]
  #      print(e)
   #     print(min(v2,c[c2][0])-1)
    #    print(max(v1,c[c2][0])-1)
     #   k=sum(e[min(v2,c[c2][0])-1:max(v2,c[c2][0])-1])
        k=0
        for temp in range(min(v2,c[c2][0])-1,max(v2,c[c2][0])-1):
            k+=e[temp]
   #     print(h)
        k=min(k,a[c2][a[c2][0]+1]-k)
    #    print(h)
        j=g+k
     #   print(j)
        e=a[c1][1:a[c1][0]+1]
   #     g=sum(e[min(v1,c[c1][0])-1:max(v1,c[c1][0])-1])
        g=0
        for temp in range(min(v1,c[c1][0])-1,max(v1,c[c1][0])-1):
            g+=e[temp]
      #  print(g)
        g=min(g,a[c1][a[c1][0]+1]-g)
       # print(g)
        g+=b[c2][c1]
        e=a[c2][1:a[c2][0]+1]
       # k=sum(e[min(v2,c[c2][1])-1:max(v2,c[c2][1])-1])
        k=0
        for temp in range(min(v2,c[c2][1])-1,max(v2,c[c2][1])-1):
            k+=e[temp]
        #print(h)
        k=min(k,a[c2][a[c2][0]+1]-k)
        #print(h)
        j=min(j,g+k)
        print(j)
