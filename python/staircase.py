import time
t1=time.time()
t=1
while(t>0):
    temp=[100000,0]
    a=[int(x) for x in range(1,100001)]
    m=0
    print (len(a))
    for i in range(0,1000):
        s=0
        j=0
        while(j<temp[0]):
            if(a[j]<a[i] and j<i):
                j=i
                s=a[i]
            elif(a[j]<a[i] and j>i):
                break
            else:
                s+=a[i]
            j+=1
        if(s>m):
            m=s
        print (i)
    t-=1
    print (m)
t2=time.time 
print(t2-t1)
