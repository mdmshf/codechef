for _ in range(int(input())):
    n,m,d,D=(int(x) for x in input().split())
    if(m<n*d or m>n*D):
        print("-1")
    else:
        x=0
        for i in range(1,n+1):
            for j in range(1,d+1):
                x=x%n+1
                print(i,x)
                
                
