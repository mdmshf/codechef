for _ in range(int(input())):
    a,b=input().split()
    l1=len(a)
    l2=len(b)
    s=""
    if l1<l2:
        l1,l2=l2,l1
        a,b=b,a
    while(l2!=0):
        s=str((int(a[l1-1])+int(b[l2-1]))%10)+s
        l1-=1
        l2-=1
    while(l1!=0):
        s=a[l1-1]+s
        l1-=1
    print(int(s))
