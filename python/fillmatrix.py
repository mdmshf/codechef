import numpy as np
t=int(input().strip(' '))
while(t>0):
    temp=input().strip(' ').split()
    n=int(temp[0])
    q=int(temp[1])
    a=np.zeros(n)
    flag=1
    while(q>0):
        te=[int(x) for x in input().strip(' ').split()]
        x=te[0]
        y=te[1]
        if(x==y and te[2]!=0):
            flag=0
        elif(x!=y and flag==1 and x>0 and y>0):
            if(a[x-1]==-10000000 and a[y-1]==-10000000):
                a[x-1]=10000000
                a[y-1]=a[x-1]+te[2]
            elif(a[x-1]!=-10000000 and a[y-1]==-10000000):
                a[y-1]=a[x-1]+te[2]
            elif(a[x-1]==-10000000 and a[y-1]!=-10000000):
                a[x-1]=a[y-1]+te[2]
            else:
                if(abs(a[x-1]-a[y-1])!=te[2]):
                    flag=0
        else:
            pass
  #      print (a)
        q-=1
    if(flag==1):
        print("yes")
    else:
        print("no")
    t-=1
