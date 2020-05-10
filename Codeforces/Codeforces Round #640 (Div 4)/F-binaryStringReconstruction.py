# auth: starkizard
# First having all 00 
# then having all 11
# note that after having 0011 We get a 01 pair, thus we reduce n1 by 1. see (1) 
# then making all 01 pairs by alternating, eg, 0011 01010....
for t in range(int(input())):
    n0,n1,n2=map(int,input().split())
    answer=[]
    if n0>0:
        answer+=[0,0]
        answer+=[0]*(n0-1)
    if n2>0:
        if answer==[]:
            answer+=[1,1]
        elif answer[-1]==0:
            answer+=[1,1]
            # (1)
            n1-=1
        else:
            answer+=[1]
        answer+=[1]*(n2-1)
    if n1>0:
        if answer==[]:
            answer+=[0,1]
        else:
            if answer[-1]==0:
                answer+=[1]
            else:
                answer+=[0]
        n1-=1
        for j in range(n1):
            if answer[-1]==0:
                answer.append(1)
            else:
                answer.append(0)
    
    print("".join(list(map(str,answer))))
 