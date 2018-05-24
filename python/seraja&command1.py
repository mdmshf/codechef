import time
a=[]
z=[]
m=0
def command():
    c=m
    while(c>0):
        if(a[c-1][0]==2):
            for i in range(a[c-1][1]-1,a[c-1][2]):
                a[i][3]+=a[c-1][3]
            a[c-1][3]=0
        c-=1
    c=m
    while(c>0):
        if(a[c-1][0]==1):
            for i in range(a[c-1][1]-1,a[c-1][2]):
                z[i]=(z[i]+a[c-1][3])%1000000007
        c-=1
    for c in z:
        print(c,end=" ")
    print()
t=int(input())
while(t>0):
    temp=input().split()
    n=int(temp[0])
    m=int(temp[1])
    z=[0]*n
    a=[]
    c=m
    while(c>0):
        temp=[int(x) for x in input().split()]
        temp.append(1)
        a.append(temp)
        c-=1
    #print (a)
    command()
    t-=1
