w=[]
def recur(i,j):
    if(i==n-2):
        s1=abs(m[i][j]-m[i+1][1])*(i+1)
        s2=abs(m[i][j]-m[i+1][0])*(i+1)
        global w
        w[i][j]= max(s1,s2)
    #    print(i,j,w)       
    else:
        if(j==0):
            if(w[i+1][0]==-1):
                recur(i+1,0)
            s1=abs(m[i][j]-m[i+1][1])*(i+1)+w[i+1][0]
            if(w[i+1][1]==-1):
                recur(i+1,1)
            s2=abs(m[i][j]-m[i+1][0])*(i+1)+w[i+1][1]
            w[i][j]=max(s1,s2)
           # print(i,j,w)
        else:
            if(w[i+1][0]==-1):
                recur(i+1,0)
            s1=abs(m[i][j]-m[i+1][1])*(i+1)+w[i+1][0]
            if(w[i+1][1]==-1):
                recur(i+1,1)
            s2=abs(m[i][j]-m[i+1][0])*(i+1)+w[i+1][1]
            w[i][j]=max(s1,s2)
          #  print(i,j,w)
t=int(input())
for _ in range(t):
    n=int(input())
    m=[]
    #global w
    w=[]
    for row in range(n): w += [[-1]*2]
    for _ in range(n):
        a=[int(x) for x in input().split()]
        q=[]
        q.append(min(a[1:]))
        q.append(max(a[1:]))
        m.append(q)
    recur(0,0)
    recur(0,1)
    #global w
   # print(w)
    #global w
    print(max(w[0][0],w[0][1]))
