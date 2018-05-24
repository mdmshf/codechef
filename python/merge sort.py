def mergesort(left,right):
    if(right>left):    
        middle=int((left+right-1)/2)
        mergesort(left,middle)
        mergesort(middle+1,right)    
        merge(left,middle,right)
        
def merge(left,middle,right):
    lengthleft=middle-left+1
    lengthright=right-middle
    leftarray=[0]*lengthleft
    rightarray=[0]*lengthright
    for i in range(0,lengthleft):
        leftarray[i]=a[left+i]    
    for i in range(0,lengthright):
        rightarray[i]=a[middle+1+i]

    i=0
    j=0
    k=0
    while i<lengthleft and j<lengthright:
        if leftarray[i]<rightarray[j]:
            a[left+k]=leftarray[i]
            i+=1
        else:
            a[left+k]=rightarray[j]
            j+=1
        k+=1
    while i<lengthleft:
        a[left+k]=leftarray[i]
        i+=1
        k+=1
    while j<lengthright:
        a[left+k]=rightarray[j]
        j+=1
        k+=1
    
print ("Enter array elements")
a=input().split()
a=[int(x) for x in a]
print("Sorted array")
mergesort(0,len(a)-1)
for i in a:
    print(i,end=" ")
