t=int(input())
while(t>0):
    s=input()
    a=[]
    ans=''
    for i in range(0,10):
        a.append(0)
        if(str(i) in s):
            a[i]=1
    if(a[6]==1):
        a[6]=s.count('6')
    if(a[7]==1):
        a[7]=s.count('7')
    if(a[8]==1):
        a[8]=s.count('8')
    for i in range(65,91):
        if(i%10==int(i/10) and a[i%10]>1):
            ans+=chr(i)
        elif(i%10!=int(i/10) and a[i%10]>0 and a[int(i/10)]>0):
            ans+=chr(i)
        else:
            pass
    print (ans)
    t-=1
