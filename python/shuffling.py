for _ in range(int(input())):
    m,x,y=[int(x) for x in input().split()]
    a=list(range(1,m+1))
    while(len(a)>2):
        f=[]
        s=[]
        for i in range(len(a)):
            if(i%2==0):
                f.append(a[i])
            else:
                s.append(a[i])
        t=int(len(f)*x/y)
        a=f[:t]+f[t+1:]+s[:t]+s[t+1:]
       # print(t,f,s,a)
    print(f[0]^s[0])
            
