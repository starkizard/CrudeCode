# auth: starkizard
# This can be done in O(1).
# my approach, let's say n for the greater value and k for the lesser value
# So we reduce the greater value by 2 and the lesser value by 1, until they become equal (they will if k doesn't run out)
# how much do we need to reduce, let's form an inequality
# n-2x=k-x
# gives x=n-k
# if k <n-k (that is , we will run out of the lesser items) , print k
# else we do get n-k steps from these opertions so we add it.
# now we'll get both our n and k equal
# we'll do one sword and one shovel to make them equal again
# both values reduce by 3 and for every such steps we get 2 emeralds
# so we add (k//3)*2 to our answer.
# now k becomes k%3 either 0,1 or 2
# if it's 2, we can have one more emerald.
# now print the answer
import os
import sys
import io
import math
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    n,k=max(n,k),min(n,k)
    answer=0
    if k<n-k:
        print(k)
        continue
    answer+=n-k
    k=2*k -n
    n=k
    answer+=2*(k//3)
    k=k%3
    if(k==2): answer+=1
    print(answer)
 
