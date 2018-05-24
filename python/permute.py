for _ in range(int(input())):
    t=input()
    l=len(t)
    a=[]
    s=[]
    p=0
    w=0
    flag=0
    for i in range(l):
        a.append(0)
        s.append(t[i])
    for i in range(l):
        if(s[i]!='*'):
            c=s[i]
            f=0
            for j in range(i+1,l):
                if(s[j]==c):
                   a[p]=i
                   a[l-p-1]=j
                   s[j]='*'
                   s[i]='*'
                   f=1
                   p+=1
               #    print(i,j,l,a,s)
                   break
            if(f==0):
                w+=1
                if(f==0 and w==1 and l%2==1):
                    s[i]='*'
                    a[int(l/2)]=i
                else:
                    print("-1")
                    flag=1
                    break
    if(flag==0):
        print(" ".join(str(x+1) for x in a))
