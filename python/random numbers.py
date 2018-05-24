for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    d=n*(n-1)/2
    a.sort()
    m1=a.count(max(a))
    a.pop()
    m2=a.count(max(a))
    if m1==1:
        print(m1*m2/d)
    else:
        print((m1*m2)/(2*d))
