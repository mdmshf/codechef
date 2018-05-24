t=int(input())
while(t>0):
    temp=input().split()
    n=int(temp[0])
    q=int(temp[1])
    a=[-10000000]*n
    flag=1
    r=[]
    c=q
    i=1
    b=[]
    while(q>0):
        te=[int(x) for x in input().split()]
        te.append(0)
        if(te[0]!=te[1] and  i==1 and a[te[0]-1]==-10000000 and a[te[1]-1]==-10000000):
            a[te[0]-1]=10000000
            a[te[1]-1]=10000000+te[2]
            i=0
            b.append(te[0])
            b.append(te[1])
        r.append(te)
        q-=1
    i=0
    k=0
    j=0
    while (k<c and flag==1):
        if(r[k][3]==0):
            if(r[k][0] not in b and r[k][1] not in b):
                a[r[k][0]-1]=10000000
                a[r[k][1]-1]=10000000+r[k][2]
                b.append(r[k][0])
                b.append(r[k][1])
                r[k][3]=1
            while(j<len(b) and flag==1):
                i=0
                while(i<c and flag==1):
                    x1=r[i][0]
                    y1=r[i][1]
                    if(r[i][3]==0):
                        if(x1==b[j] and y1==b[j] and r[i][2]!=0):
                            r[i][3]=1
                            flag=0
                            break
                        elif(x1 in b and y1 in b):
                            r[i][3]=1
                            if(abs(a[x1-1]-a[y1-1])!=r[i][2]):
                                flag=0
                                break                        
                        elif(x1==b[j] and y1!=b[j]):
                            a[y1-1]=a[x1-1]+r[i][2]
                            r[i][3]=1
                            b.append(y1)
                        elif(x1!=b[j] and y1==b[j]):
                            a[x1-1]=a[y1-1]+r[i][2]
                            r[i][3]=1
                            b.append(x1) 
                        else:
                            pass            
                    i+=1
                j+=1
        k+=1
    if(flag==1):
        print("yes")
    else:
        print("no")
    t-=1
