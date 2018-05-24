for _ in range(int(input())):
    n,q=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    for i in range(0,q):
        t=[int(x) for x in input().split()]
        if t[0]==1:
            left ,right=t[1]-1,t[2]-1
            middle=-1
            for i in range(left,right+1):
                if middle==-1:
                    middle=(a[i]-a[left])*(a[right]-a[i])
                else:
                    l=(a[i]-a[left])*(a[right]-a[i])
                    if l>middle:
                        middle=l
            print (middle)
        else:
            a[t[1]-1]=t[2]
