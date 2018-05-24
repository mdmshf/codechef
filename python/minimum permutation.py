t=int(input())
while(t>0):
    n=int(input())
    s=''
    i=1
    while(i<=n):
        if(n%2==0):
            if(i<n-2):
                s+=str(i+1)+' '+str(i)+' '
            else:
                s+=str(i+1)+' '+str(i)
                break
        else:
            if(i<=n-4):
                s+=str(i+1)+' '+str(i)+' '
            else:
                s+=str(i+1)+' '+str(i+2)+' '+str(i)
                break
        i+=2
    print (s)
    t-=1
        
