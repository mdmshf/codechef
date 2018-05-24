import math
t=int(input())
for _ in range(0,t):
    temp=input().split()
    n=int(temp[0])
    k=int(temp[1])
    k=k+1
    cards=pow(2,n)
    decks=1
    for _ in range(0,n):
        deck_size=int(cards/decks)
        pos=(deck_size*int(math.ceil(k/deck_size)-1))
        pos_in_deck=k-pos
        if(pos_in_deck%2==0):
            pos=int(pos+int(deck_size/2)+int(pos_in_deck/2))
        else:
            pos=int(pos+int(pos_in_deck/2)+1)
        k=int(pos)
        decks*=2
    print(int(k-1))
