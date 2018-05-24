t=int(input())
for _ in range(t):
    a=input().split()
    b=input().split()
    c=0
    h=0
    a=int(a[1])
    for x in b:
        if int(x)<=int(a/10):
            h+=1
        elif int(x)>=int(a/2):
            c+=1
    if(c==1 and h==2):
        print("yes")
    else:
        print("no")
