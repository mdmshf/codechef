for _ in range(int(input())):
    n=int(input())
    a=[]
    for i in range(n):
        b=[int(x) for x in input().split()]
        a.append(b)
   # print(a)
    q=int(input())
    for i in range(q):
        t=int(input())
        for j in range(n):
            if(a[j][2]==0 and a[j][3]==0):
                y=a[j][0]+a[j][1]*t
            else:
                y=a[j][0]+a[j][1]*t+a[j][2]*t*t+a[j][3]*t*t*t
           # print(y)
            if j==0:
                m=y
            else:
                if y<m:
                    m=y
        print(m)
                
