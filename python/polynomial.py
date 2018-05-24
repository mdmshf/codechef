D=lambda p:[i*p[i]for i in range(1,len(p))]
A=lambda p,x:p>[]and p[0]+x*A(p[1:],x)
def N(p):
    f=D(p)
    s=D(f)
    x=1.
    y=-x
    x-=A(f,x)/A(s,x)*99
    y-=A(f,y)/A(s,y)*99
    return A(p,x),A(p,y)
print (min(N(input())))
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
           ans=min(N(a[j]))
           print(t,ans)
           if j==0:
               m=ans
           if(ans<m):
               m=ans
        print(int(m))
