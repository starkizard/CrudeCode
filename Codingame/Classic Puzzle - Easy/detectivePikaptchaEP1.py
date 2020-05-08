#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/detective-pikaptcha-ep1
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

width, height = [int(i) for i in input().split()]
maze=[]
newmaze=[]

for i in range(height): maze.append(input())
for i in range(height):
    s=""
    for j in range(width):
        if maze[i][j]=="#":
            s+="#"
            continue
        count=0
        try:
            if j>=1:
                if maze[i][j-1]!="#":count+=1
        except:pass
        try:
            if maze[i+1][j]!="#":count+=1
        except:pass
        try:
            if i>=1:
                if maze[i-1][j]!="#":count+=1
        except:pass
        try:
            if maze[i][j+1]!="#":count+=1
        except:pass
        s+=str(count)
    newmaze.append(s)    
for i in newmaze:
    print(i)
                