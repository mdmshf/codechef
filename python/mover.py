t=int(input())
for q  in range(0,t):
    a=input().split()
    n=int(a[0])
    d=int(a[1])
    a=input().split()
    for i in range(0,n):
        a[i]=int(a[i])
    s=sum(a)
    move=0
 #   print ("n=",n,"d=",d,"s=",s)
    flag=0
    if(s%n==0):
        f=s/n
        #print ("f=",f)
        for i in range(0,d,1):
            s=0
            c=0
            for j in range(i,n,d):
                s=s+a[j]
                c=c+1
  #              print ("i=",i,"j=",j)
   #         print ("s=",s,"c=",c)
            if(s/c!=f):
                flag=1
                print ("-1")
                break
        if(flag!=1):
     #       print ("1")
            for i in range(0,d,1):
                for j in range(i,n,d):
                    if(j+d<n):
                        if(a[j]<f):
                            m=f-a[j]
                            a[j]=f
                            a[j+d]=a[j+d]-m
                        else:
                            m=a[j]-f
                            a[j]=f
                            a[j+d]=a[j+d]+m
                        move=move+m
            move=int(move)
            print (move)                
    else:
        print ("-1")
