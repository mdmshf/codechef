t=int(input())
j=1
while(j<=t):
    a=[x for x in input().split()]
    q=a[1][:]
    d=int(a[0])
    td=0
    v=1
    c=0
    l=0
    for i in q:
        if i=='C':
            v*=2
            c+=1
        else:
            td+=v
            l+=1
    if td<=d:
        print("Case #",j,": 0",sep="")
    elif l==0 or c==0:
        print("Case #",j,": IMPOSSIBLE",sep="")
    else:
        swap=0
        i=l+c-2
        flag=0
        while(i>=0):
            if(q[i]=='C' and q[i+1]=='S'):
                q=q[:i]+'SC'+q[i+2:]
                swap+=1
                td=0
                v=1
                for k in q:
                    if k=='C':
                        v*=2
                    else:
                        td+=v
                i=l+c-1
              #  print(q,td,d)
            #print(swap)
            i-=1
            if(td<=d):
                print("Case #",j,": ",swap,sep="")
                flag=1
                break
        if flag==0:
            print("Case #",j,": IMPOSSIBLE",sep="")
    j+=1
    
        
