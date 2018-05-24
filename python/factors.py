for _ in range(int(input())):
    w,h,x,y=(input().split())
    w,h,x,y=(int(w),int(h),int(x),int(y))
    if(w<x or h<y):
        print("0 0")
    else:
        l1=int(w/x)
        l2=int(h/y)
        a1=l1*y
        a2=l2*x
        if(l1*a1*x < l2*a2*y):
            print(l1*x,a1)
        else:
            print(a2,l2*y)
