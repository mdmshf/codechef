for _ in range(int(input())):
    n,m=[int(x) for x in input().split()]
    b=[]
    for k in range(n):
        a=[int(x) for x in input().split()]
        m=max(a)
        b.append([i for i, j in enumerate(a) if j == m])
        print(b)
   # for i in b:
    #    for j in i:
