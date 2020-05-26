# auth: starkizard
# we want to have minimum lights, one light can illuminate two . for the remaining one we should have one extra light
# answer will be ceil(a*b/2)
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    a,b=map(int,input().split())
    print(math.ceil(a*b/2))