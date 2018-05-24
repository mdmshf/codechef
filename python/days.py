for _ in range(int(input())):
    a=input().split()
    if(a[0]=="28"):
        print("4 4 4 4 4 4 4")
    elif(a[0]=="29"):
        if(a[1]=="mon"):
            print("5 4 4 4 4 4 4")    
        if(a[1]=="tues"):
            print("4 5 4 4 4 4 4")
        if(a[1]=="wed"):
            print("4 4 5 4 4 4 4")
        if(a[1]=="thurs"):
            print("4 4 4 5 4 4 4")
        if(a[1]=="fri"):
            print("4 4 4 4 5 4 4")
        if(a[1]=="sat"):
            print("4 4 4 4 4 5 4")
        if(a[1]=="sun"):
            print("4 4 4 4 4 4 5")
    elif(a[0]=="30"):
        if(a[1]=="mon"):
            print("5 5 4 4 4 4 4")    
        if(a[1]=="tues"):
            print("4 5 5 4 4 4 4")
        if(a[1]=="wed"):
            print("4 4 5 5 4 4 4")
        if(a[1]=="thurs"):
            print("4 4 4 5 5 4 4")
        if(a[1]=="fri"):
            print("4 4 4 4 5 5 4")
        if(a[1]=="sat"):
            print("4 4 4 4 4 5 5")
        if(a[1]=="sun"):
            print("5 4 4 4 4 4 5")
    else:
        if(a[1]=="mon"):
            print("5 5 5 4 4 4 4")    
        if(a[1]=="tues"):
            print("4 5 5 5 4 4 4")
        if(a[1]=="wed"):
            print("4 4 5 5 5 4 4")
        if(a[1]=="thurs"):
            print("4 4 4 5 5 5 4")
        if(a[1]=="fri"):
            print("4 4 4 4 5 5 5")
        if(a[1]=="sat"):
            print("5 4 4 4 4 5 5")
        if(a[1]=="sun"):
            print("5 5 4 4 4 4 5")
    
        
