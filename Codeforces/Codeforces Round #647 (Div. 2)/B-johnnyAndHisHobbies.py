# auth: starkizard
# implementation based , kind of. Should know how sets work.
# for every element in array a given , i check if i^k (i xor k) exists in set s1 (made from array a)
# checking in set takes O(1) with high probability as it uses integer hashing.
# use unordered_set in cpp

import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s1=set(a)
    k=1
    while(k<=1024):
        check=True
        for i in a:
            if i^k not in s1:
                check=False
                break
        if check==True:
            print(k)
            break
        k+=1
    if check==False:
        print(-1)
 