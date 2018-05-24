for _ in range(int(input())):
    n,a=[int(x) for x in input().split()]
    if a==1:
        print(n,'a'*n)
    elif a==2:
        if n==1:
            print('1 a')
        elif n>1 and n<4:
            s='abb'
            print(n-1,s[:n])
        elif n==4:
            print('2 aabb')
        elif n>=5 and n<9:
            s='aaababbb'
            print('3',s[:n])
        else:
            s='aabbab'
            print('4',s*int(n/6)+s[:n%6])
    else:
        s='abc'*int(n/3)
        if n%3==1:
            s+='a' 
        if n%3==2:
            s+='ab' 
        print('1',s)
