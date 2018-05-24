for _ in range(int(input())):
    q=int(input())
    a=[int(x) for x in input().split()]
    c1,c2,c3,c4=(0,0,0,0)
    for i in a:
        if i==0:
            c1+=1
        elif i==1:
            c2+=1
        elif i==-1:
            c3+=1
        else:
            c4+=1
    if(c2>0 and c3>0 and c1+c2+c3==q):
        print("yes")
    elif( ( (c2>0 and c3==0)) and (c2+c3+c1==q-1) and ):
        print("yes")
    else:
        print("no")
