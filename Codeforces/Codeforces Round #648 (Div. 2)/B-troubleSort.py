# auth: starkizard
# keep in mind that swapping can be done on ANY two elements as long as their b is different.
# Definitely do not assume that the swapping could be done only on consecutive elements. and drop like 600 points on the question..
# definitely didn't happen to me
# So, if they are all of the same b , they have to be sorted , otherwise you can do nothing
# else, if there is even one difference, lets analyze
# let's say you want to insert the nth element at the correct place (just like insertion sort)
#  (1)- if the element at the correct place is of different b , easy peasy just swap.
# if it's not. there is at least one element existing with a different b . swap it with that element and we arrive at case (1).
# so, if all the bs aren't 0 or 1, its definitely possible to sort.
import os
import sys
import io
import math 
    
    
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for t in range(int(input())):
    n=int(input())
    a=map(int,input().split())
    a=list(a)
    b=list(map(int,input().split()))
    if 0 not in b or 1 not in b:
        if a==sorted(a):
            print("Yes")
        else:
            print("No")
    else:
        print("Yes")