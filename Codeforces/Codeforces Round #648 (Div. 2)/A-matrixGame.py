# auth: starkizard
# We need to put one's in the cells where there aren't any other 1s in the same row or same coloumn
# And when we put a 1, we can't put a 1 in that row or in that column
# means we need to find the number of rows which are all 0
# and the number of columns that are all 0 
# the minimum of these two would be the number of moves
# if it's even , Vivek wins, else Ashish.

import os
import sys
import io
import math 
    
    
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for t in range(int(input())):
    n,m=map(int,input().split())
    matrix=[]
    for i in range(n):
        row=list(map(int,input().split()))
        matrix.append(row)
    rowcount=0
    for i in matrix:
        if 1 not in i:
            rowcount+=1
    colcount=0
    rez = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]
    for i in rez:
        if 1 not in i:
            colcount+=1
    if min(rowcount,colcount)%2==0:
        print("Vivek")
    else:
        print("Ashish")