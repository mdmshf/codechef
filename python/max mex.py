t=int(input())
for _ in range(t):
    a=[int(x) for x in input().split()]
    n,k=(a[0],a[1])
    s=[int(x) for x in input().split()]
    m=max(s)
    if(m==n-1):
        print(m+k+1)
    elif(m+1-n<=k):
        print(k+n)
    else:
        a=[0]*(200001)
        for i in s:
            a[i]=1
        b=[]
        for i in range(m):
            if(a[i]==0):
                b.append(i)
        print(b[k])
