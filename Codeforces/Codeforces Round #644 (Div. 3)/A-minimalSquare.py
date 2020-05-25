# auth: starkizard
# putting the two rectangles together with sides a and b can be done in two ways,
# the new rectangles could be 2a X b or 2b X a
# And to minimize the area of square, we need to make the side of the square as minimum as possible
# And, the side of the sqaure will be the maximum of the two sides, otherwise the rectangles won't fit inside
# Thus, the sides of our rectangle would be min(a,b)*2,max(a,b)
# because if we double the side which is greater, we'll end up with a bigger square
# now choose the side that is bigger as the side of the square and the answer will be side^2
# 
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    a,b=map(int,input().split())
    print(max(min(a,b)*2,max(a,b))**2)