for _ in range(int(input())):
    n,k=input().split()
    n,k=(int(n),int(k))
    s=''
    if(k<3 or n<3):
        print("impossible")
    else:
        if k%4==0:
            s='ab'*int(k/4)
            s+=s[::-1]
        elif k%4==1:
            s='ab'*int((k-1)/4)
            s+='a'+s[::-1]
        elif k%4==2:
            s='ab'*int((k-2)/4)
            s+='aa'+s[::-1]
        else:
            s='ab'*int((k-3)/4)
            s+='aba'+s[::-1]
        s=s*int(n/k)
        print(s) if(s==s[::-1]) else print("impossible")
            
       
