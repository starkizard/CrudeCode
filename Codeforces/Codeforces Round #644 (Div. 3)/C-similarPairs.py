# auth: starkizard
# We know that n is even
# So: (number of odd %2)==(number of even %2)
# so, we can say if the number of odd (or, even) terms are even, we can make pairs of odd numbers and even numbers
# answer would be , YES
# else, if number of odd terms is odd , we need exactly 1 (even,odd) pair to make the number of odd even again
# so if we can find 1 pair like that, we can Pair all of them
# such pair is only possible if its (n,n+1) or (n,n-1) (according to the question)
# so, for every element i in array, i check if i-1 or i+1 in array
# if we find a single case where it's True, it means we can make an (even,odd) pair thus solving our issue and answer would be YES
# if no such elements are there, answer is NO.
# To check efficiently a set is used (implements hashing)  
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s=set(a)
    nodd=0
    for i in a:
        if i%2!=0:
            nodd+=1
    neven=n-nodd
    if neven%2==0:
        print("YES")
    else:
        for i in a:
            check=False
            if i-1 in s or i+1 in s:
                print("YES")
                check=True
                break
        if check==False: print("NO")