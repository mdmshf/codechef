t=int(input())
while(t>0):
    temp=input().split()
    n=int(temp[0])
    a=int(temp[1])
    b=int(temp[2])
    if(a>b):
        b,a=a,b
    b=b-a+1
    a=1
    if((360/n)*(b-a)==180):
        print (0)
    elif((360/n)*(b-a)<180):
        print (b-2)
    else:
        print (n-b)
    t-=1
