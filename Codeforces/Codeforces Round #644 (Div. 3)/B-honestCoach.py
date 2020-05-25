# auth : starkizard
# dividing the array into two arrays such that the absolute difference of max of one array and min of other array is minimum is asked
# The 2 arrays must have at least one element
# now let us see this problem in a different way
# let's say we divide the array into two arrays A and B
# we've made array A and the max(A) is x
# then we want to incluce the element that is closet to x as the min of the arrray B
# if the element closest to x is lesser than x, say y; just make the max(A)=x and min(B)=x
# any case our answer is |x-y|
# we need to find the minimum of |x-y| for all values x and y in array and they're not the same element
# 
# TL;DR : thos question is an overly complicated way to ask the minimum difference b/w any two elements
#
# can be found in O(nlogn) by sorting then checking every pair linearly for minimum difference
# One optimization more could be done, in case of repeated elements, we can linearly add all elements into set and check if the size of set is equal to the size of our list
# if yes, answer must be 0, because there is a repeated element (Basically, Hashing)
# if no, we do our o(nlogn) stuff.
# i didn't implement it because, meh, this sol worked.
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())))
    answer=float("inf")
    for i in range(n-1):
        answer=min(answer,abs(a[i]-a[i+1]))
    print(answer)