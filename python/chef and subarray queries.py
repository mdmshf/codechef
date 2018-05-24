n,q,l,r=[int(x) for x in input().split()]
a=[0]
for _ in range(n):
    a.append(0)
for _ in range(q):
    k,x,y=[int(x) for x in input().split()]
    if k==1:
        a[x]=y
        print(a)
    else:
        c=0
        i=x
        while(i<=y):
            if a[i]>r:
                i+=1
                continue
            f=0
            g=0
            while i<=y and a[i]<=r:
                if a[i]>=l:
                    f+=1
                    i+=1
                    continue
                h=0
                while i<=y and a[i]<l:
                    f+=1
                    h+=1
                    i+=1
                g+=h*(h+1)/2
            c+=((f*(f+1))/2)-g
        print(int(c))
