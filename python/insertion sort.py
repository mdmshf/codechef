def insertion(a):
    l=len(a)
    for i in range(1,l):
        f=a[i]
        k=i
        for j in range(k-1,-1,-1):
            if a[j]>f:
                a[k],a[j]=a[j],a[k]
                k-=1
            else:
                break
    return a



print ("Enter array elements")
a=input().split()
a=[int(x) for x in a]
print("Sorted array")
a=insertion(a)
for i in a:
    print(i,end=" ")
