t=int(input())
for q in range(0,t):
    a=input().split()
    n=int(a[0])
    m=int(a[1])
    a=input().split()
    b=[]
    c=[]
    ts=0
    nc=0
#    b = [x[:] for x in [[0]*3]*m]
 #   c = [x[:] for x in [[0]*1]*n]
#    print (a)
 #   print (b)
  #  print (c)
    for i in range(0,m):
        temp=input().split()
        b.append(temp)
    for i in range(0,n):
        temp=input()
        c.append(temp)
#    print (a)
 #   print (b)
  #  print (c)
    for i in range(0,n):
        d=[]
        ma=0
        pos=-1
        for j in range(0,m):
            if i==0:
                b[j].append(0)
            if(c[i][j]=='1' and int(a[i])<=int(b[j][0]) and int(b[j][1])>0 and int(b[j][0])>ma):
                ma=int(b[j][0])
                pos=j
               # print ("i=",i,"j=",j,"ma=",ma,b[j][0],b[j][1])
        if(pos!=-1):
            b[pos][1]=int(b[pos][1])-1
            ts+=int(b[pos][0])
            nc+=1
            b[pos][2]+=1
    z=0
    for i in range(0,m):
        if(b[i][2]==0):
            z+=1
  #  print (b)
    print (nc,ts,z)
