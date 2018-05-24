for _ in range(int(input())):
    n,p,q=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    x=0
    d={}
    for i in range(0,q):
        if i%64==0:
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
        if x in d:
            d[x]+=1
        else:
            d[x]=1
        print(i,l,r,x)
