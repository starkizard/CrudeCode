#author:starkizard
#question at: https://www.codingame.com/ide/puzzle/unit-fractions
import sys
import math
n = int(input())
for y in range(1,2*n +1):
    if n!=y:
        x=(n*y)/(y-n)
        if float(x)==abs(int(x)):
            print("1/"+str(n)+" = 1/"+str(int(x))+" + 1/"+str(y))
            
