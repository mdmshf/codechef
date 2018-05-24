for _ in range(int(input())):
    n,k=input().split()
    n,k=(int(n),int(k))
    a=[int(x) for x in input().split()]
    l=-1
    r=10000000000
    flag=0
    for i in a:
        if(i<k):
            if(i>l):
                l=i
            else:
                flag=1
                #print(i)
                break
        elif(i>k):
            if(i<r):
                r=i
            else:
                flag=1
                #print(1)
                break
        else:
            l=i
            r=i
    if(flag==1):
        print("NO")
    else:
        print("YES")
