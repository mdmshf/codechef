t=int(input())
sq=2**(1/2.0)
while(t>0):
    temp=input().split()
    n=int(temp[0])
    v1=int(temp[1])
    v2=int(temp[2])
    t1=n*sq/v1
    t2=2*n/v2
 #   print ("t1=",t1,"t2=",t2)
    if(t1<t2):
        print ("Stairs")
    else:
        print ("Elevator")
    t-=1
