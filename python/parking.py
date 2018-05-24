for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    l=0
    for i in range(n-1):
        if(a[i]==1 and a[i+1]==-1 and i!=n-2):
            a[i+1]=1
            l=i+1
        elif(a[i]==-1 and a[i+1]==1):
            l=i+1
    print(l+1)       
