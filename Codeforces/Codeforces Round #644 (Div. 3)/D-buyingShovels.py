# auth: starkizard
# okay for base cases, if k>=n , we can always take 1 packet of size n and be satisfied, thus our answer is 1
# if k==1 we can only take packets of size 1, so our answer is n
# else we need to find the mazimum possible factor of n, less than or equal to k.
# answer will be n//factor
# O(sqrt(N)) implementation done here
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n,k=map(int,input().split())
    if k>=n:
        print(1)
    elif k==1:
        print(n)
    else:
        root=math.ceil(math.sqrt(n))
        answer=n
        i=2
        m=1
        while i<=root and i<=k:
            if n%i==0:
                if n//i<=k:
                    m=max(m,n//i)
                else:
                    m=max(m,i)
                
            i+=1
        print(n//m)