for _ in range(int(input())):
    n=input()
    l=len(n)
    i=l-1
    c=-1
    while(i>-1):
        s=''
        for j in range(i):
            s+=n[j]
        for j in range(i+1,l):
            s+=n[j]
        print(s)
        if(int(s)==0):
            pass
        elif(int(s)%6==0):
            if(int(s)>c):
                c=int(s)
        i-=1
    print(c)
