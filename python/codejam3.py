import sys
import numpy
t=int(input())
for _ in range(t):
    b=numpy.zeros((1001,1001))
    a=int(input())
    for i in range(1001):
        if i==0:
            print(500,500)
            sys.stdout.flush()
            b[500][500]=1
        print("7")
        inp=[int(x) for x in input().split()]
        if inp[0]==0 and inp[1]==0:
            print("1")
            break
        elif inp[0]==-1 and inp[1]==-1:
            print("2")
            exit()
        else:
            b[inp[0]][inp[1]]=1
            if i==0:
                print("3")
                northmost = inp[0]
                southmost = inp[0]
                westmost = inp[1]
                eastmost = inp[1]
                print(500,500)
                sys.stdout.flush()
            else:
                print("4")
                northmost = min(inp[0], northmost)
                southmost = max(inp[0], southmost)
                westmost = min(inp[1], westmost)
                eastmost = max(inp[1], eastmost)
                for j in range(northmost,southmost+1):
                    flag=0
                    for k in range(westmost,eastmost+1):
                        print("6")
                        if b[j][k]==0:
                            print("5")
                            print(j,k)
                            sys.stdout.flush()
                            flag=1
                            break
                    if flag==1:
                        break
                
        
