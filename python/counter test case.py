t=int(input())
for _ in range(t):
    n=int(input())
    x=int((pow(2,32)-200000))
    s=int(x/n)+1
    if(n==99992 or n==99999):
        s-=1
  #      print("s",n)
    for i in range(n-2):
        print(s,end=" ")
    print(x-(s*(n-2)),"100000")
