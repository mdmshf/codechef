t=int(input())
for q  in range(0,t):
    s=input()
    t=input()
    ls=len(s)
    cas=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    cat=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    if(s==t):
        print ("B")
    else:
        for i in range(0,ls):
            cas[ord(s[i])-96]+=1
            cat[ord(t[i])-96]+=1
        c=0
        cs=0
        ct=0
        q=0
        f=0
        for i in range(1,27):
            if(cas[i]>1 and cat[i]==0):
                print('A')
                f=1
                break
            else:
                pass
        if f==0:
            print('B')
