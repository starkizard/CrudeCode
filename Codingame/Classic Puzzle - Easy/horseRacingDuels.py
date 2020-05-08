#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/horse-racing-duals
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
p=[]
for i in range(n):
    p.append(int(input()))
p.sort()
diff=float("INF")
for i in range(n-1):
    d=abs(p[i]-p[i+1])
    if diff>d:
        diff=d

# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr)

print(diff)
