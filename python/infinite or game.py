t=int(input())
for _ in range(t):
    a=input().split()
    n=int(a[0])
    k=int(a[1])
    a=input().split()
    a=[int(x) for x in a]
    c=0
    i=1
    p=pow(2,k)-1
  #  print (b)
    while(i<=p):
        if i not in a:
            c+=1
        i=i*2
    print(c)
