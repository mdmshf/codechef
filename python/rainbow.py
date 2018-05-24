t=int(input())
for j in range(0,t):
    n=int(input())
    st=input().split()
    ts=st[:]
    ts.reverse()
    f=0
    a=1
    m=max(st)
  #  print (st)
   # print (ts)
    if(ts==st):
        for i in range(0,n):
            if(st[i]<=m and a==1):
                if(st[i]=='1'):
                    if(st[i+1]=='1' or st[i+1]=='2'):
                        pass
                    else:
                        f=1
 #                       print ("1")
                        break
                if(st[i]=='2'):
                    if(st[i+1]=='2' or st[i+1]=='3'):
                        pass
                    else:
                        f=1
  #                      print ("2")
                        break
                if(st[i]=='3'):
                    if(st[i+1]=='3' or st[i+1]=='4'):
                        pass
                    else:
                        f=1
   #                     print ("3")
                        break
                if(st[i]=='4'):
                    if(st[i+1]=='4' or st[i+1]=='5'):
                        pass
                    else:
                        f=1
    #                    print ("4")
                        break
                if(st[i]=='5'):
                    if(st[i+1]=='5' or st[i+1]=='6'):
                        pass
                    else:
                        f=1
     #                   print ("5")
                        break
                if(st[i]=='6'):
                    if(st[i+1]=='6' or st[i+1]=='7'):
                        pass
                    else:
                        f=1
      #                  print ("6")
                        break
                if(st[i]=='7'):
                    a=0
                    if(st[i+1]=='7' or st[i+1]=='6'):
                        pass
                    else:
                        f=1
       #                 print ("7")
                        break
            else:
                if(st[i]=='1'):
                    if(i<n-1 and st[i+1]=='1'):
                        pass
                    elif(i==n-1):
                        pass
                    else:
                        f=1
        #                print ("8")
                        break
                if(st[i]=='2'):
                    if(st[i+1]=='2' or st[i+1]=='1'):
                        pass
                    else:
                        f=1
         #               print ("9")
                        break
                if(st[i]=='3'):
                    if(st[i+1]=='3' or st[i+1]=='2'):
                        pass
                    else:
                        f=1
          #              print ("0")
                        break
                if(st[i]=='4'):
                    if(st[i+1]=='4' or st[i+1]=='3'):
                        pass
                    else:
                        f=1
           #             print ("11")
                        break
                if(st[i]=='5'):
                    if(st[i+1]=='5' or st[i+1]=='4'):
                        pass
                    else:
                        f=1
            #            print ("12")
                        break
                if(st[i]=='6'):
                    if(st[i+1]=='6' or st[i+1]=='5'):
                        pass
                    else:
                        f=1
             #           print ("13")
                        break
                if(st[i]=='7'):
                    if(st[i+1]=='7' or st[i+1]=='6'):
                        pass
                    else:
                        f=1
              #          print ("14")
                        break

    else:
        f=1
    if(f==1):
        print ("no")
    else:
        print ("yes")
