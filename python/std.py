for _ in range(int(input())):
    n,k=input().split()
    n,k=(int(n),int(k))
    nu=n*k
    d=pow(n-1,0.5)
    s=float(nu/d)    
    for i in range(n-1):
        print("0",end=" ")
    print(s)

    
