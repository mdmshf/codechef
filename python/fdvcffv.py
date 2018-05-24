v=0
MAX=16
#################################################
m=[[-2,1],[-2,-1],[1,-2],[-1,-2]]
w=[[0 for i in range(MAX)] for j in range(MAX)]
for s in range(4, 31):
    for i in range(max(0,s-MAX)+1, min(s, MAX)):
        j=s-i
        v=[]
        for move in m:
            x, y = i+move[0], j+move[1]
            if 0<x<MAX and 0<y<MAX:
                v.append(w[x][y])
        n=0
        while n in v:
            n+=1
        w[i][j]=n
for q in w:
    print(q)
    
