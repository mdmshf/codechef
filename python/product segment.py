for _ in range(int(input())):
    n,p,q=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    x=0
    i=0
    v=int(q/64)
    while(i<q):
        if i%64==0:
            y=int(i/64)
            z={}
            ne=0
            l=(b[int(i/64)]+x)%n
            r=(b[int(i/64)+1]+x)%n
        else:
            l=(l+x)%n
            r=(r+x)%n
        if l>r:
            l,r=r,l
        x=1
        for j in range(l,r+1):
            x=(x*a[j])%p
        x=(x+1)%p
     #   print(i,l,r,x)
        if y<v:
            if x in z:
                z[x]+=1
            else:
                z[x]=1
            e=sum(1 for x in z.values() if x==2)
            if e-ne==-1 and ne!=0:
                i+=int((64-(i-y*64))/ne)*ne-ne+1
            else:
                ne=e
                i+=1
        else:
            i+=1
    print(x)
