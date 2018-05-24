import math as m
from fractions import gcd
#    def gcd(a,b):
 #      b=abs(b)
  #      while(a and b):
   #         if a>b:
    #            a=a-b
     #       else:
      #          b=b-a
       # return a+b

for _ in range(int(input())):
    n=int(input())
    polygon = [[0 for i in range(2)] for j in range(n)]
    for k in range(n-1,-1,-1):
        temp=[int(x) for x in input().split()]
        polygon[k][0]=temp[0]
        polygon[k][1]=temp[1]
    polygon.append(polygon[0])
    s=0
    #print(polygon)
    for i in range(n):
        s+=polygon[i+1][0]*polygon[i][1]-polygon[i][0]*polygon[i+1][1]
    bord=0
    for i in range(n):
   #     print(polygon[i+1][1]-polygon[i][1],polygon[i+1][0]-polygon[i][0])
        bord+=gcd(polygon[i+1][1]-polygon[i][1],polygon[i+1][0]-polygon[i][0])
    maxpts=((s+2-bord)/2)
    reqdpts=int(n/10)
    flag=0
    if maxpts<reqdpts:
        print("-1")
    else:
        pts=[]
        for i in range(n-2):
            for j in range(i+2,n-1):
                t1=(polygon[i][0]+polygon[j][0])/2
                t2=(polygon[i][1]+polygon[j][1])/2
                p1=[m.floor(t1),m.floor(t2)]
                p2=[m.ceil(t1),m.floor(t2)]
                p3=[m.floor(t1),m.ceil(t2)]
                p4=[m.ceil(t1),m.ceil(t2)]
             #   print(polygon[i],polygon[j],t1,t2,p1,p2,p3,p4)
                if p1==p2 and p2==p3 and p3==p4 and p1 not in pts:
                    pts.append(p1)
                if len(pts)==reqdpts:
                    for k in pts:
                        print(k[0],k[1])
                    flag=1
                    break
            if flag==1:
                break
