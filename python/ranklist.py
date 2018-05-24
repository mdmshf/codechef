for _ in range(int(input())):
    n,m=(input().split())
    n,m=(int(n),int(m))
    p=input().split()
    a={}
    b={}
    for i in range(n):
        t=input().split()
        if t[0] in a:
            if t[1] in b[t[0]]:
                a[t[0]]=a[t[0]]-b[t[0]][t[1]]+int(t[2])
                b[t[0]][t[1]]=int(t[2])
            else:
                a[t[0]]=a[t[0]]+int(t[2])
                b[t[0]][t[1]]=int(t[2])
        else:
            a[t[0]]=int(t[2])
            temp={}
            temp[t[1]]=int(t[2])
            b[t[0]]=temp
    print(len(a))
    print(a)
    print(b)
    for key, value in sorted(a.items(), key=lambda x:x[1],reverse=True):
        print("%s %s" % (key, value))
