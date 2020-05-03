#author: starkizard
#Question at: https://www.codingame.com/ide/puzzle/defibrillators
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lon = float(input().replace(",","."))
lat = float(input().replace(",","."))
n = int(input())
defi={}
for i in range(n):
    s = input().split(";")
    lo=float(s[-2].replace(",","."))
    la=float(s[-1].replace(",","."))
    x=(lo-lon)*(math.cos((lat+la)/2))
    y=(la-lat)
    d=math.sqrt(x**2 + y**2)*6371
    defi[d]=s[1]

m=min(defi.keys())
print(defi[m])

# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr)