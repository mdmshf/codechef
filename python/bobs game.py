b=[]
count=0
dic={}
n=0
def call(x,y):

    if b[x][y]=='X':
        return -1
    if (x,y) in dic:
        return dic[(x,y)]
    s=[]
    if(x-1>=0 and y-1>=0):
#        print("call(",x-1,",",y-1,") , s=",s," , dic=",dic)
        s.append(call(x-1,y-1))
    if(x-1>=0):        
 #       print("call(",x-1,",",y,") , s=",s," , dic=",dic)
        s.append(call(x-1,y))
    if(y-1>=0):        
  #      print("call(",x,",",y-1,") , s=",s," , dic=",dic)
        s.append(call(x,y-1))
    i=0
    while(True):
        if i not in s:
            dic[(x,y)]=i
            return i
        i=i+1
def xors(i,j,h,l):
    global dic
    dic={}
    xorsum=0
    xorsum^=call(i,j)
   # print("\t",i,j)
    for x in range(n):
        for y in range(n):
            if((x!=h or y!=l) and b[x][y]=='K'):
    #            print("\t",x,y)
     #           print(globals()['dic'])

                dic.clear()
                xorsum=xorsum^call(x,y)
    if(xorsum):
        global count
        count+=1
      #  print("count",count)
def find(i,j):
    if(i-1>=0 and j-1>=0 and b[i-1][j-1]!='X'):
       # print("upleft")
        xors(i-1,j-1,i,j)
    if(i-1>=0 and b[i-1][j]!='X'):
        #print("up")
        xors(i-1,j,i,j)             
    if(j-1>=0 and b[i][j-1]!='X'):
        #print("left")
        xors(i,j-1,i,j)                
    
def main():
    q = int(input().strip())
    for a0 in range(q):
        global count
        count=0
        global n
        n = int(input().strip())
        global b
        b = []
        for i in range(n):
            t = str(input().strip())
            a=[]
            for j in t:          
                a.append(j)
            b.append(a)
        #print(b)
        for i in range(n):
            for j in range(n):
                if(b[i][j]=='K'):
                #    print(i,j)
                    find(i,j)
        #print(count)
        if(count==0):
            print("LOSE")
        else:
            print("WIN",count)

if __name__=="__main__":
    main()
