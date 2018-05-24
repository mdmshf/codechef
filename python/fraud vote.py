for _ in range(int(input())):
    n,m=[int(x) for x in input().split()]
    print(int((m+1)/n)) if(m+1)%n==0  else print("-1")
