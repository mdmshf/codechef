for _ in range(int(input())):
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    c=[int(x) for x in input().split()]
    flag=0
    if(a[0]>=b[0] and a[1]>=b[1] and a[2]>=b[2] and b[0]>=c[0] and b[1]>=c[1] and b[2]>=c[2] and (a[0]!=b[0] or a[1]!=b[1] or a[2]!=b[2]) and (b[0]!=c[0] or b[1]!=c[1] or b[2]!=c[2]) ):
        flag=1
     #   print("h1")
    elif(a[0]>=c[0] and a[1]>=c[1] and a[2]>=c[2] and c[0]>=b[0] and c[1]>=b[1] and c[2]>=b[2] and (a[0]!=c[0] or a[1]!=c[1] or a[2]!=c[2]) and (c[0]!=b[0] or c[1]!=b[1] or c[2]!=b[2])):
        flag=1
      #  print("h2")
    elif(b[0]>=a[0] and b[1]>=a[1] and b[2]>=a[2] and a[0]>=c[0] and a[1]>=c[1] and a[2]>=c[2] and (b[0]!=a[0] or b[1]!=a[1] or b[2]!=a[2]) and (a[0]!=c[0] or a[1]!=c[1] or a[2]!=c[2])):
        flag=1
       # print("h3")
    elif(b[0]>=c[0] and b[1]>=c[1] and b[2]>=c[2] and c[0]>=a[0] and c[1]>=a[1] and c[2]>=a[2] and (b[0]!=c[0] or b[1]!=c[1] or b[2]!=c[2]) and (c[0]!=a[0] or c[1]!=a[1] or c[2]!=a[2])):
        flag=1
        #print("h4")
    elif(c[0]>=a[0] and c[1]>=a[1] and c[2]>=a[2] and a[0]>=b[0] and a[1]>=b[1] and a[2]>=b[2] and (c[0]!=a[0] or c[1]!=a[1] or c[2]!=a[2]) and (a[0]!=b[0] or a[1]!=b[1] or a[2]!=b[2])):
        flag=1
        #print("h5")
    elif(c[0]>=b[0] and c[1]>=b[1] and c[2]>=b[2] and b[0]>=a[0] and b[1]>=a[1] and b[2]>=a[2] and (c[0]!=b[0] or c[1]!=b[1] or c[2]!=b[2]) and (b[0]!=a[0] or b[1]!=a[1] or b[2]!=a[2])):
        flag=1
        #print("h6")
    if(flag==1):
        print("yes")
    else:
        print("no")
