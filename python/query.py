for _ in range(int(input())):
    n=int(input())
    N=[]
    for i in range(n):
        a=[int(x) for x in input().split()]
        N.append(a)
    q=int(input())
    for i in range(q):
        Q=[int(x) for x in input().split()]
        a=[[0,[]] for x in range(1001)]
        for j in range(Q[0]):
            a[int(Q[j+1]/100)][0]+=1
            a[int(Q[j+1]/100)][1].append(Q[j+1])
        fans=0
        #print(a[0])
        for k in range(n):
            l=N[k][0]
            r=N[k][1]
            ans=0
            le=int(l/100)+1
            for j in a[le-1][1]:
                if j >=l and j<=le*100 and j<=r:
                    ans+=1
           # print(ans,end=" ")
            re=int(r/100)
            if(l-r==1):
                for j in a[re][1]:
                    if j<=r and j>=re*100 and j>=l:
                        ans+=1
            #print(ans,end=" ")
            for j in range(le,re):
                ans+=a[j][0]
            #print(ans,end="\n")
            if ans%2==1:
                fans+=1
        print(fans)
