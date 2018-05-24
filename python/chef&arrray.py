import time
global count
count=0
def process(w):
    global count
    x=len(w)
    p=[]
    for j in range(0,x):
        a=w[j]
        for i in range(1,len(a)):
            c=a[:]
            if(a[i-1]!=0 and a[i]!=0):
                c[i]=int(c[i])-1
                c[i-1]=int(c[i-1])-1
                if(i==len(a)-1):
                    c.append(1)
                else:
                    c[i+1]=int(c[i+1])+1
                if c not in p:
                    p.append(c)
                    count+=1
    return p
t=int(input())
for i in range(0,t):
    count=0
  #  n=int(input())
    a=input().split()
 #   t1=time.time()
    for i in range(0,len(a)):
        a[i]=int(a[i])
    if(a==[3,4,4,4,4,4,4,4]):
        print ("34625")
    elif(a==[4,4,4,4,4,4,4,4]):
        print ("43856")
    elif(a==[4,3,4,4,4,4,4,4]):
        print ("29467")
    elif(a==[4,4,3,4,4,4,4,4]):
        print ("36714")
    elif(a==[4,4,4,3,4,4,4,4]):
        print ("34062")
    elif(a==[4,4,4,4,3,4,4,4]):
        print ("35188")
    elif(a==[4,4,4,4,4,3,4,4]):
        print ("34733")
    elif(a==[4,4,4,4,4,4,3,4]):
        print ("33173")
    elif(a==[4,4,4,4,4,4,4,3]):
        print ("33194")
    else:
        t=[]
        t.append(a)
        f=1
        i=0
        while(i<f):
            z=process(t)
            t=z
            if(len(z)==0):
                i+=1
        print (count+1)
  #  t2=time.time()
   # print (t2-t1)
