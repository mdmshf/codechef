def power(x,y):
    if( y == 0):
        return 1
    temp = power(x, int(y/2))
    if (y%2 == 0):
        return temp*temp
    else:
        return x*temp*temp
def sum(n):
 #   print("in sum",n)
    if(n<10):
        return n
    else:
        s=0
        while(n>0):
            s+=n%10
            n=int(n/10)
        return(sum(s))
for _ in range(int(input())):
    a=[int(x) for x in input().split()]
    b=[]
    k=1
    while(True):
        q=sum(power(a[0],k))
    #    print("k=",k,q)
        if(q not in b):
            b.append(q)
        else:
            break
        k+=1
    #print("b = ",b)
    w=len(b)
    print(b[(a[1]%w)-1])
