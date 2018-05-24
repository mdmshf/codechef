t=int(input())
for _ in range(t):
    s=input()
    flag=0
    for i in range(0,len(s)):
        for k in range(i,len(s)):
            if s[k]==s[i]:
                for j in range(i+1,len(s)):
                    for m in range(j,len(s)):
                        if s[m]==s[j]:
                            if(k!=i and m==j):
                                flag=1
                            #    print (i,j,k,m)
                                break
                            elif(m!=j and k==i):
                                flag=1
                             #   print (i,j,k,m)
                                break
                            elif(i!=k and j!=m):
                                flag=1
                              #  print(i,j,k,m)
                                break
                            else:
                                pass
                    if(flag==1):
                        break
                if(flag==1):
                    break
            if(flag==1):
                break
        if(flag==1):
            break
    if(flag==0):
        print ("no")
    else:
        print ("yes")








