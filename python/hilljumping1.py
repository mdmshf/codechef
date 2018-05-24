import operator
x = {1: 2, 3: 4, 4: 3, 2: 1, 0: 0}
sorted_x = sorted(x.items(), key=operator.itemgetter(1))

tempin=input().split()
n=int(tempin[0])
q=int(tempin[1])
a=input().split()
a.insert(0,0)
for i in range(0,len(a)):
    a[i]=int(a[i])
print (a)
b=[-1]
for i in range(1,n):
    c=i
    flag=0
    if(i<n):
        while(a[c+1]<=a[i] and c+1<n):
            c+=1
    if(c+1<n):
        b.append(c+1)
    else:
        b.append(-1)
b.append(-1)
print (b)

for t in range(0,q):
    temp=input().split()
    if(temp[0]=='1'):
        i=int(temp[1])
        k=int(temp[2])
        lasth=a[i]
        pos=i
        tempt=0
        for z in range(i,n+1):
            if z-pos>100:
                break
            if lasth<a[z]:
                tempt+=1
                pos=z
                lasth=a[z]
            if tempt==k:
                break
        if tempt==0:
            print(i)
        else:
            print(pos)
    else:
        l=int(temp[1])
        r=int(temp[2])
        x=int(temp[3])
        for j in range(l,r+1):
            a[j]=a[j]+x
 #   print (a)
