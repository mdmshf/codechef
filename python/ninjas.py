for _ in range(int(input())):
    n,l,b,h=(input().split())
    n,l,b,h=(int(n),int(l),int(b),int(h))
    L=[0,l]
    B=[0,b]
    H=[0,h]
    a=[]
    for i in range(n):
        t=[int(x) for x in input().split()]
        L.append(t[0])
        B.append(t[1])
        H.append(t[2])
    L.sort()
    B.sort()
    H.sort()
    m1,m2,m3=(0,0,0)
    for i in range(n+1,0,-1):
        if(L[i]-L[i-1]>m1):
            m1=L[i]-L[i-1]
        #L[i]=L[i]-L[i-1]
    for i in range(n+1,0,-1):
        if(B[i]-B[i-1]>m2):
            m2=B[i]-B[i-1]
        #B[i]=B[i]-B[i-1]
    for i in range(n+1,0,-1):
        if(H[i]-H[i-1]>m3):
            m3=H[i]-H[i-1]
        #H[i]=H[i]-H[i-1]
    print((m1*m2*m3)%1000000007)












    
 ##   for i in range(1,n+2):
   #     for j in range(1,n+2):
    #        for k in range(1,n+2):
     #           a.append((L[i]-L[i-1])*(B[j]-B[j-1])*(H[k]-H[k-1]))      
    #print(max(a))
