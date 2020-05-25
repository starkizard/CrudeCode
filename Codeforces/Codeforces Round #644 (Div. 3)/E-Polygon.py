# auth : starkizard
# As cannons are placed above and left, for every 1 there must be at least a 1 either below or to the right of it
# obviously except the last row and last column
# straightforward implementation
import os
import sys
import io
import math 
  
 
#input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    matrix=[]
    for i in range(n):
        matrix.append(list(map(int,input())))
    check=True
    for y in range(n-1):
        for x in range(n-1):
            if matrix[y][x]==1:
                if matrix[y][x+1]==0 and matrix[y+1][x]==0:
                    check=False
                    break
    if check==True:
        print("YES")
    else:
        print("NO")