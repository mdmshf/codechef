import time
a=[]
z=[]
def command(temp):
    if(temp[0]==1):
        c1(temp[1],temp[2])
    else:
        for i in range(temp[1]-1,temp[2]):
            if(a[i][0]==1):
                c1(a[i][1],a[i][2])
            else:
                command(a[i])
def c1(l,r):
    for i in range(l-1,r):
        z[i]+=1
t=int(input())
while(t>0):
    temp=input().split()
    n=int(temp[0])
    m=int(temp[1])
    z=[0]*n
    a=[]
    while(m>0):
        temp=[int(x) for x in input().split()]
        t1=time.time()
        a.append(temp)
        command(temp)
        m-=1
    t-=1
    t2=time.time()
    for c in z:
        print(c,end=" ")
    print (t2-t1)
