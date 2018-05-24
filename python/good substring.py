for _ in range(int(input())):
    s=input()
    l=len(s)
    c=0
    i=0
    while(i<l-1):
      #  print("i=",i)
        if(i+1<l and s[i]==s[i+1]):
            j=i
            while(i+1<l and s[i+1]==s[i]):
                i+=1                
            k=i-j
       #     print("k",k)
            c+=k*(k+1)/2
        #    print("h1",i)
            if(j!=0 and i+1<l and s[j-1]==s[i+1]):
                c+=1
         #       print("h2",i)
        else:
            if(i!=0 and i+1<l and s[i-1]==s[i+1]):
                c+=1
          #      print("h3",i)
                i+=1
            else:
                i+=1
    print(int(c))
