t=int(input())
for _ in range(t):
    n=int(input())
    flag=0
    y=[0,0,0,0,0,0]
    a=[int(x) for x in input().split()]
    b=[[2,3,4,5,6],[1,3,4,5,6],[1,2,4,5,6],[1,2,3,5,6],[1,2,3,4,6],[1,2,3,4,5]]
    for i in range(len(a)-1):
        if(a[i]==a[i+1]):
            flag=1
            break
        if a[i+1] in b[a[i]-1]:
            b[a[i]-1].remove(a[i+1])
        if a[i] in b[a[i+1]-1]:
            b[a[i+1]-1].remove(a[i])
   # print(b)
    for i in b:
        if i==[]:
            flag=1
    if(flag==1):
         print("-1")
    else:
        c=[]
        for i in range(1,7):
            f=0
            for j in b:
                if i in j:
                    f+=1
            c.append(f)
        #print("b",b)
        #print("c",c)
        for i in range(1,7):
            while i in c:
                m=0
                for j in range(len(c)):
                    if i==c[j]:
                        m=j
                        break
                e=[]
                for j in range(len(b)):
                    if m+1 in b[j]:
                        e.append(j+1)
               # print("e",e)
                r=e[0]
                for j in e:
                    if c[j-1]<c[r-1]:
                        r=j
              #  print("r",r)
                y[m]=r
                y[r-1]=m+1
                c[m]=1000000
                c[r-1]=100000
             #   print(i,"c =",c)
            #    print(y)
        for i in y:
            print(i,end=" ")
                        
                            
