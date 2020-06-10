# auth: starkizard
# for a triangle, sum of any two sides should be greater than the third side
# It's not hard to see why the triangles with sides b c c will suffice this property
import os
import sys
import io
import math 
    
    
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for t in range(int(input())):
    a,b,c,d=map(int,input().split())
    print(b,c,c)