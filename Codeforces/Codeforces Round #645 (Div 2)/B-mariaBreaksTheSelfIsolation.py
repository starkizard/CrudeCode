# auth: starkizard
# First we can see that we can never invite grannies with demands over n
# now we also want to invite the max grannies
# for that we'd have to invite the granny with max possible demand 
# so we sort the demands first in decending order, skip the ones greater than n
# whenever we find a granny which can be invited , the condition should be that there must be enough grannies lesser than her, i.e the number of elements left must be less than or equal to her demad
# if we find such a granny, it's guaranteed we found the answer because we sorted decreasingly.
# break and enjoy.
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    answer=1
    i=0
    while i<n:
        if a[i]>n:
            i+=1
        else:
            if a[i]<=n-i:
                answer+=n-i
                break
            i+=1
    print(answer)