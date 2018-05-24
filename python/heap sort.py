def heap():
    for i in range(l,-1,-1):
        heapify(l,i)
    for i in range(l-1,0,-1):
        a[i],a[0]=a[0],a[i]
        heapify(i,0)
def heapify(n,i):
    l=2*i+1
    r=2*i+2
    max=i
    if l<n and a[i]<a[l]:
        max=l
    if r<n and a[max]<a[r]:
        max=r
    if max!=i:
        a[i],a[max]=a[max],a[i]
        heapify(n,max)
print ("Enter array elements")
a=input().split()
a=[int(x) for x in a]
l=len(a)
print("Sorted array")
heap()
for i in a:
    print(i,end=" ")
