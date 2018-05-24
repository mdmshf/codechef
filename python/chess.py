for _ in range(int(input())):
    n=int(input())
    a=[]
    t=[0]*n
    for j in range(n):
        temp=input().split()
        a.append(temp)
        c=len(a)-1
        s=0
        f=0
        for i in range(c):
            if t[i]==0:
                if ((int(a[i][0]) >=int(a[c][1]) and int(a[i][0]) <=int(a[c][2])) and int(a[c][0]) >=int(a[i][1]) and int(a[c][0]) <=int(a[i][2])) :
                    s+=1
                if a[i][4]==a[c][4]:
                    s+=1
                if a[i][3]==a[c][3]:
                    s+=1
                if ((a[i][5]==a[c][5]) or (a[i][5]=='white' and a[c][5]=='black') or (a[c][5]=='white' and a[i][5]=='black')):
                    s+=1
                if s==4:
                    print(i+1)
                    t[c]=1
                    t[i]=1
                    f=1
                    break
                else:
                    s=0
        if f==0:
            print('wait')
