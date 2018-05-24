import math
from fractions import Fraction
for _ in range(int(input())):
    l,d,t=[int(x) for x in input().split()]
    a=l*math.cos(t*math.acos(float(d)/float(l)))
    a=Fraction(a).limit_denominator()
    p=a.numerator
    q=a.denominator
    w1=pow(q,66666667,1000000007)
    w2=pow(w1,3,1000000007)
    w=pow(w2,5,1000000007)
    print((p*w)%1000000007)




