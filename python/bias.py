from random import randint as r
for _ in range(int(input())):
    n,m=[int(x) for x in input().split()]
    a=[]
    for i in range(n):
        t=[int(x) for x in input().split()]
        a.append(t)
    for i in range(n):
        print(r(a[i][0],a[i][1]),end=' ')
    
