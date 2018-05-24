for _ in range(int(input())):
    n,k=(input().split())
    n,k=(int(n),int(k))
    a=[int(x) for x in input().split()]
    a.sort()
    f=int((k+n)/2)
    print(a[f])
