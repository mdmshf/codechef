def selection(a):
    l=len(a)
    for i in range(l):
        min=i
        for j in range(i,l):
            if a[j]<a[min]:
                min=j
        a[i],a[min]=a[min],a[i]
    return a



print ("Enter array elements")
a=input().split()
a=[int(x) for x in a]
print("Sorted array")
a=selection(a)
for i in a:
    print(i,end=" ")
