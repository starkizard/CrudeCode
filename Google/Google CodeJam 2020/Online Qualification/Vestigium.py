#author: starkizard

# simple question, doing what the statement says, Using numpy transpose to easily calculate transpose
import numpy as np
t=int(input())
for _ in range(t):
    n=int(input())
    rows=[]
    columns=[0]*n
    trace=0
    
    #input loop
    for i in range(n):
        arr=list(map(int,input().split()))
        #calculating trace right now.
        trace+=arr[i]
        #rows is a list of lists each element one row 
        rows.append(arr)
    
    rows=np.array(rows)
    #made columns as transpose
    columns=rows.T
    rowcount=0
    columncount=0
    for i in rows:

        #checking for duplicates
        # set() makes an unordered set from a list and removes duplicates
        # set([1,2,3,2,4])={1,2,3,4} (no specific order)

        if sorted(list(i))!=sorted(list(set(list(i)))):
            rowcount+=1

    for i in columns:
        if sorted(list(i))!=sorted(list(set(list(i)))):
            columncount+=1
    print("Case #{}: {} {} {}".format(_+1,trace,rowcount,columncount))