def subs(l):
    if l == []:
        return [[]]
    x = subs(l[1:])
    return x + [[l[0]] + y for y in x]
t=int(input())
for _ in range(0,t):
    s=0
    temp=[int(x) for x in input().split()]
    a=[[0] for _ in range(temp[0]+1)]
    for i in range(0,temp[1]):
        q=[int(x) for x in input().split()]
        a[q[0]].append(q[1])
        a[q[1]].append(q[0])
    print (a)
    for i in subs([x for x in range(1,temp[0]+1)]):
        f=1
        for j in range(0,len(i)-1):
            if(i[j+1] not in a[j+1]):
                f=0
                break
        if(f==1):
            if(len(i)==0):
                pass
            elif(len(i)==temp[0]):
                s+=pow(len(i),temp[2])
            else:
                s+=pow(len(i)-1,temp[2])
            print(s,i)
    print(s)
