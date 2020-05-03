for t in range(int(input())):
    x,y,m=input().split()
    x=int(x)
    y=int(y)
    paths=[None]*(len(m)+1)
    paths[0]=(x,y)
    j=0
    for i in range(1,len(m)+1):
        if m[j]=="N":
            paths[i]=(x,y+1)
            y+=1
        elif m[j]=="S":
            paths[i]=(x,y-1)
            y-=1
        elif m[j]=="E":
            paths[i]=(x+1,y)
            x+=1
        else:
            paths[i]=(x-1,y)
            x-=1
        j+=1
    found=False
    for move in range(0,len(m)+1):
        current=paths[move]
        if abs(current[0])+abs(current[1])<=move:
            found=True
            break
    if found==False:
        answer="IMPOSSIBLE"
    else:
        answer=move
    
    print("Case #{}: {}".format(t+1,answer))
