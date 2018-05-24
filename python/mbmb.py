n=512*1025
c=0
for i in range(1,n+1):
    if(n%i==0):
        c+=1
print(c)
