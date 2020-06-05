# auth: starkizard
# if a==b , no change output 0
# else, as we're multiplying or dividing by 2,4,8 a%b==0 or b%a==0 else -1.
# Now the factor we need to get would be max(a,b)/min(a,b)
# so we can go greedily by reducing the factor by 8 times then 4 times and then 2 times. and increasing the count
# whenever we are unable to do this, means we get a remainder of 1 and the factor mustve been something like 7 or 6 (not a power of two) and thus can't be achieved, print -1
# the only case that's a power of two and leaves a remainder of 1 is the number 1 itself. and that factor is first taken care by the a==b case.
# if there's no violation as such, print the count.
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    a,b=map(int,input().split())
    if(a==b):
        print(0)
        continue
    if(a%b==0 or b%a==0):
        required=max(a,b)//min(a,b)
        count=0
        while(required!=1):
            if required%8==0:
                required//=8
            elif required%4==0:
                required//=4
            elif required%2==0:
                required//=2
            else:
                count=-1
                break
            count+=1
        print(count)
 
    else:
        print(-1)