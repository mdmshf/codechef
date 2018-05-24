t=int(input())
while (t>0):
    n=int(input())
    a=[int(x) for x in input().split()]
    ps,ss=0,sum(a)
    m,index=ss+a[0],0
    for i in range(0,n):
        ps+=a[i]
        if(ss+ps<m):
            index=i
            m=ss+ps
        ss-=a[i]
    print (index+1)
    t-=1
        
