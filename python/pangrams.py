n=int(input())
for i in range(0,n):
    temp=input()
    cost=temp.split()
    alph=[]
    money=0
    for j in range(0,26):
        cost[j]=int(cost[j])
        alph.append(0)
    st=input()
    for char in st:
    #    print (ord(char)-97)
        alph[ord(char)-97]+=1
    for j in range(0,26):
        if(alph[j]==0):
            money+=cost[j]
    print(money)
