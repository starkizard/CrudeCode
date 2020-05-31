# auth: starkizard
# the question asks asks the number of flips we can do to make all 0s and 1s together , like 0001111 or 111000000
# So first i input the indexes of 0s and 1s in pos0 and pos1 lists .
# I first take the case where i have all the zeroes first, then the ones and store it in answer0
# For this case, i loop thru indexes of pos0, each indicating till where i have to put 0s, then 1 afterwards.
# i count the number of 1s less than the indexby ooping thru pos1. because that will make everything till that index 0. then we need to make all zeros into ones,
# there's no need to loop again as we know the number of zeroes afterwards will be just (n-index of the loop variable)
# the minimum of all these answers will be the answer for 000001111 type subsequences

# Doing the same thing for 1110000, and printing the min of the two answers
import os
import sys
import io
import math 
#input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
    
for t in range(int(input())):
    s=input()
    pos0=[]
    pos1=[]
    for i in range(len(s)):
        if s[i]=="0":
            pos0.append(i)
        else:
            pos1.append(i)
    n0=len(pos0)
    n1=len(pos1)
    
    answer0=float("inf")
    count=0
    for i in pos0:
        temp=0
        for j in pos1:
            if j<i:
                temp+=1
            else:
                break
        temp+=n0-count-1
        count+=1
        answer0=min(temp,answer0)
    
    answer1=float("inf")
    count=0
    for i in pos1:
        temp=0
        for j in pos0:
            if j<i:
                temp+=1
            else:
                break
        temp+=n1-count-1
        count+=1
        answer1=min(temp,answer1)
    
    print(min(answer0,answer1))