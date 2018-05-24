for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    c=0
    for i in range(0,n):
        s=0
        p=1
        for j in range(i,n):
            s+=a[j]
            p*=a[j]
            if(s==p):
                c+=1
    print(c)
