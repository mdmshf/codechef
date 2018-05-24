t=int(input())
s=int(t*(t+1)/2)
a=[7]
b=7
c=16
d=8
for i in range(s-1):
    b=b+c+d
    d+=c
    a.append(b)
k=0
for i in range(t):
    for j in range(i+1):
        q=str(a[k])
        q='0'*(5-len(q))+q
        print(q,end=" ")
        k+=1
    print()
        
