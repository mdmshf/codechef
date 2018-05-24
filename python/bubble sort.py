def bubble(a):
    l=len(a)
    for i in range(l):
        for j in range(l-i-1):
            if a[j]>a[j+1]:
                a[j+1],a[j]=a[j],a[j+1]
    return a






print ("Enter array elements")
a=input().split()
a=[int(x) for x in a]
print("Sorted array")
a=bubble(a)
for i in a:
    print(i)
