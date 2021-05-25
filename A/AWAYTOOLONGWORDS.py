x=int(input())
for i in range(1,x+1):
    y=str(input())
    if len(y)>10:
        print(y[0],len(y)-2,y[-1],sep="")
    
    else:
        print(y)

    
    
        