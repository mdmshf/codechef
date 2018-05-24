for _ in range(int(input())):
    n=int(input())
    c=[int(x) for x in input().split()]
    t=[int(x) for x in input().split()]
    p=[int(x) for x in input().split()]
    m=[]
    m.append(c[0])
    for i in range(1,n):
        r=m[i-1]+c[i]-t[i-1]*p[i-1]
        m.append(r)
    print(max(m))
