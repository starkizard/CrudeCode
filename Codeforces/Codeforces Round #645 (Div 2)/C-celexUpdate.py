# auth: starkizard
# this is a maths based question
# first of all let me clear this . if x1==x2 or y1==y2 there exists only one path.
# therefore the answer is 1
# if x1>x2 or y1>y2 , it's impossible to go, because you need to go either left or up, answer is 0
# so, the base cases are done with.
# For reaching to point x2 y2 from x1 y1,
# the max sum would be going down then right
# the min sum would be going right then down
# we'd get every sum between these two values in the paths, as traversing all paths, we can see that we're just adding 1 or not adding at all
# then using Mafs, we see that the difference between those two sums turn out to be (x2-x1)*(y2-y1)
# so the total number of sums is this number, plus one

import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    x1,y1,x2,y2=map(int,input().split())
    if x1==x2 or y1==y2:
        answer=1
    if x1>x2 or y1>y2:
        answer=0
    else:
        print((x2-x1)*(y2-y1) +1) 