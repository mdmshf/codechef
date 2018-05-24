# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
temp=[int(x) for x in input().split()]
m=temp[0]
n=temp[1]
rot=temp[2]
a=[]
for _ in range(m):
    temp=[int(x) for x in input().split()]
    a.append(temp)
for i in range(math.ceil(m/2)):
    t=i
    b=m-i-1
    l=i
    r=n-i-1
    c=[]
    for j in range(l,r+1):
        c.append(a[t][j])
    for j in range(t+1,b):
        c.append(a[j][r])
    for j in range(r,l-1,-1):
        c.append(a[b][j])
    for j in range(b-1,t,-1):
        c.append(a[j][l])
    for _ in range(rot):
        if(len(c)>0):
            temp=c[0]
            for j in range(len(c)):
                c[j]=c[(j+1)%len(c)]
            c.pop()
            c.append(temp)
    k=0
    for j in range(l,r+1):
        a[t][j]=c[k]
        k+=1
    for j in range(t+1,b):
        a[j][r]=c[k]
        k+=1
    for j in range(r,l-1,-1):
        a[b][j]=c[k]
        k+=1
    for j in range(b-1,t,-1):
        a[j][l]=c[k]
        k+=1
for j in range(m):
    for k in range(n):
        print(a[j][k],end=" ")
    print("")
