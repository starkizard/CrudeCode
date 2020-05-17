# auth: starkizard
# Checking for elements having k , and then looping until 1 reached. 
# if not , then loop continues from next element. if group is made, it skips to one after the index it reached

import os
import sys
import io
#fast input
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

for t in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    i=0
    answer=0
    while i < n-k+1:
        if a[i]==k:
            cur=k-1
            j=i
            while j<n-1:
                if a[j+1]!=cur:
                    break
                else:
                    if cur==1:
                        i=j+1
                        answer+=1
                        break
                    else:
                        cur-=1
                j+=1
        i+=1
                    
                
        
    print("Case #{}: {}".format(t+1,answer))