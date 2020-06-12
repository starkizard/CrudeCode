# auth: starkizard
# So, we're given x, every query from then will make the whole range equal to 1 if it has x or any other 1 in the range
# so we keep our answer as a range first,answerstart for the starting point,
# answerend for the endpoint. At start both of these are x. 
# then as we get a query l,r (a,b in code , because my code, my variables)
# if the ranges collide (l,r) and (answerstart,answerend)
# we make answerstart as the min(l,answerstart)
# and answerend as the max(r,answerend)
# after processing all queries we'll get the range and print answerend-answerstart+!
import os
import sys
import io
import math
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for _ in range(int(input())):
    n,x,m=map(int,input().split())
    answerstart=x
    answerend=x
    for i in range(m):
        a,b=map(int,input().split())
        if a<=answerstart<=b or a<=answerend<=b:
            answerstart=min(a,answerstart)
            answerend=max(b,answerend)
    print(answerend-answerstart+1)    
