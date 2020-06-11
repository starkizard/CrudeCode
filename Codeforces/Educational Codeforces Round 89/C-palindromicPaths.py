# auth: starkizard
# refer https://www.geeksforgeeks.org/zigzag-or-diagonal-traversal-of-matrix/ for diagonal order of a matrix
# okay let's say you are at index i,j arbitrary.
# you have path going down or right. let's say you end u on a and b in these two cases.
# now lets start from the mirror of it (cut diagonally) like if youre at 1 1, you are now at n m
# because we need to make all path palindrome the grid should be palindromic along the main diagonal
# now let's say this index is x,y and you need to go left or up, you should end up with the same a and b .
# and as we want to cover all the paths, down and right. we notice that the diagonals should be equal to their mirrors
# AND, they should only consist of 1s and 0s. 
# I tried hard explaining this approach of mine, But there's little i can do with comments only. A whiteboard would have been better xD

import os
import sys
import io
import math
def diagonalOrder(matrix,ROW,COL) : 
      
    # There will be ROW+COL-1 lines in the output 
    s=[]
    for line in range(1, (ROW + COL)) : 
        # Get column index of the first element 
        # in this line of output. The index is 0 
        # for first ROW lines and line - ROW for 
        # remaining lines  
        start_col = max(0, line - ROW) 
  
        # Get count of elements in this line. 
        # The count of elements is equal to 
        # minimum of line number, COL-start_col and ROW  
        count = min(line, (COL - start_col), ROW) 
  
        # Print elements of this line
        l=[]  
        for j in range(0, count) : 
            l.append(matrix[min(ROW, line) - j - 1] [start_col + j]) 
  
        s.append(l)
    return s
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    matrix=[]
    for i in range(n):
        matrix.append(list(map(int,input().split())))
    s=diagonalOrder(matrix,n,m)
    if(len(s)%2==1):
        a=s[:len(s)//2]
        b=s[len(s)//2+1:][::-1]
    else:
        a=s[:len(s)//2]
        b=s[len(s)//2:][::-1]
    answer=0
    for i,j in zip(a,b):
        answer+=min(abs(i.count(0)+j.count(0)),abs(i.count(1)+j.count(1)))
    print(answer)
