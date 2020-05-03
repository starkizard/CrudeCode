#author: starkizard

#here, I calculated the max depth by sorting all times given then increasing the counter when start time is encountered
#and decreasing it when it ends
#If depth > 2 , means 2 people can't handle
# if depth ==1 , means a single person can handle, so I have the answer as "C"*n
#else I sort the intervals according to start times and allocate the interval to C or J depending on who's free


for t in range(int(input())):
    n=int(input())
    intervals=[]
    alltimes=[]
    for i in range(n):
        #end denoted by 0 start denoted by 1
        a=list(map(int,input().split()))
        alltimes.append([a[0],1])
        alltimes.append([a[1],0])
        intervals.append([a,i])
    #0 , 1 because if one interval's end time equals another intervals start time, the end one will be encountered first and depth goes down
    alltimes.sort()
    depth=0
    totaldepths=[]
    for i in alltimes:
        if i[1]==1:
            depth+=1
            totaldepths.append(depth)
        else:
            depth-=1
            totaldepths.append(depth)
    depth=max(totaldepths)
    if depth>2:
        answer="IMPOSSIBLE"
    elif depth==1:
        answer="C"*n
    else:
        #just a place holder, doesn't matter having zeroes
        answer=[0]*n
        lis=sorted(intervals)
        for i in range(n-1):
            if i==0:
                answer[lis[0][1]]="C"
            if lis[i][0][1]>lis[i+1][0][0]:
                if answer[lis[i][1]]=="C":
                    answer[lis[i+1][1]]="J"
                else:
                    answer[lis[i+1][1]]="C"
            else:
                answer[lis[i+1][1]]=answer[lis[i][1]]
        answer="".join(answer)
            
    print("Case #{}: {}".format(t+1,answer))
