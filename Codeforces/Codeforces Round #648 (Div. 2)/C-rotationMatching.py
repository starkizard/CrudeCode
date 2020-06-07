# auth: starkizard
# We need to see the differences in indices and see which ones have the same difference. But, We'll do it efficiently.
# First I store all the indexes in the respective indexes array. 
# see, l1 and l2.
# this is done in O(n)
# then we see the difference in the indexes (mod n) because cyclic.
# the we find out the frequency of the most frequent difference there. (not thard to see why that will be the amount of matches)
import os
import sys
import io
import math  
# copied straight from geeksforgeeks because that's how MAFIA works
def mostFrequent(arr, n): 
  
    # Insert all elements in Hash. 
    Hash = dict() 
    for i in range(n): 
        if arr[i] in Hash.keys(): 
            Hash[arr[i]] += 1
        else: 
            Hash[arr[i]] = 1
  
    # find the max frequency 
    max_count = 0
    res = -1
    for i in Hash:  
        if (max_count < Hash[i]):  
            res = i 
            max_count = Hash[i] 
    #just don't copy it blatantly use some brain , return the max count instead or res
    return max_count
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
n=int(input())
a1=map(int,input().split())
a2=map(int,input().split())
a1,a2=list(a1),list(a2)
l1=[0]*n
l2=[0]*n
for i in range(n):
    l1[a1[i]-1]=i
    l2[a2[i]-1]=i
moddiff=[]
for i in range(n):
    moddiff.append((l1[i]-l2[i])%n)
print(mostFrequent(moddiff,n))