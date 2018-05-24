for _ in range(int(input())):
    a=[int(x) for x in input().split()]
    s=input()
    o=s.count('O')
    e=s.count('E')
    t=0
    if a[1]%2==0:
        em=int(a[1]/2)
        om=int(a[1]/2)
    else:
        em=int(a[1]/2)
        om=int(a[1]/2)+1
    if o>om*a[2]:
        t+=om*a[2]
    else:
        t+=o
    if e>em*a[2]:
        t+=em*a[2]
    else:
        t+=e
    print(t)
    print('yes') if(t>=a[0]) else print('no')
