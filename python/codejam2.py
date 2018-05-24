t=int(input())
j=1
while(j<=t):
    n=int(input())    
    a=[int(x) for x in input().split()]
    b=[]
    for i in range(n):
        b.append(a[i])
    b.sort()
    d=0
    while not d:
        d=1
        for i in range(n-2):
            if a[i]>a[i+2]:
                d=0
                a[i],a[i+2]=a[i+2],a[i]
            #print(a)
    flag=0
    print("Case #",j,": ",sep="",end="")
    for i in range(n):
        if a[i]!=b[i]:
            flag=1
            print(i)
    if flag==0:
        print("OK")
    print(a,b)
    j+=1
    
        
