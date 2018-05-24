global count
count=0
def process(w):
    global count
    x=len(w)
    print ("w",w)
    p=[]
    for j in range(0,x):
        a=w[j]
        print ("a",a)
        for i in range(1,len(a)):
            c=a[:]
          #  print(a[i-1],a[i])
            if(a[i-1]!=0 and a[i]!=0):
                c[i]=int(c[i])-1
                c[i-1]=int(c[i-1])-1
                if(i==len(a)-1):
                    c.append(1)
                else:
                    c[i+1]=int(c[i+1])+1
                print("c=",c)
                if c in p:
                    pass
                else:
                    p.append(c)
                    count+=1
        print ("p=",p)
 #   w.append(p)
    print ("final p",p)
    return p
t=int(input())
for i in range(0,t):
    count=0
    n=int(input())
    a=input().split()
    for i in range(0,len(a)):
        a[i]=int(a[i])
    t=[]
    t.append(a)
    f=len(t)
    i=0
    while(i<f):
        d=[]
        if(len(t)==1):
            d.append(t[i])
            z=process(d)
        else:
            z=process(t[i])
        if(len(z)==0):
            pass
        else:
            t.append(z)
        print ("mid t",t)
        f=len(t)
        i+=1
    print ("final t",t)
    print (count+1)
