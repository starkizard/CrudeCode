#auth: starkizard
#question at: https://www.codingame.com/ide/puzzle/temperatures
import sys
import math
n = int(input())
temp=list(map(int,input().split()))
if(n==0):
    print(0)
    sys.exit(0)
m=min([abs(i) for i in temp])
check=0
for i in temp:
    if i==m:
        print(i)
        check=1
        break
if(check==0):
    print(m*-1)
