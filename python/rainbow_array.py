t=int(input())
for j in range(0,t):
    n=int(input())
    st=input().split()
    ts=st[:]
    ts.reverse()
    s=""
    i=0
    if(ts==st):
        while(i<n):
            a=st[i]
            s=s+a
            while(st[i]==a):
                if(i==n-1):
                    i=i+1
                    break
                else:
                    i=i+1
        if(s=="1234567654321"):
            print ("yes")
        else:
            print("no")
    else:
        print ("no")
 #   print (s)
        
