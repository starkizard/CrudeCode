# auth: starkizard
# Fast IO is needed in this question
# the first 4 lines are for fast io, they take the input into a stream before compilation , so that's why it's fast
# sorting the list in the ascending order, Because we need the maximum amount of groups, no need to include the heavy not required people
# the variable required keeps track of the max number of people needed to make a group till then. whenever we have enough people to make a group (kept track of with the unused variable)
# we make a group.
# print groups in the end 
import os
import sys
import io
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n==1:
        if a[0]==1:
            print(1)
        else:
            print(0)
        continue
    a.sort()
    i=0
    groups=0
    unused=0
    required=0
    while(i<n):
        required=a[i]
        unused+=1
        if unused==required:
            groups+=1
            unused=0
            required=0
        i+=1
    print(groups)
