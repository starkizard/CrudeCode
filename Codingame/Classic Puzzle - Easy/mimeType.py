#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/mime-type
import sys
import math


n = int(input()) 
q = int(input())
d={}
for i in range(n):
    ext, mt = input().split()
    d[ext.lower()]=mt
for i in range(q):
    fname = input()
    if "." in fname:
        lst=fname.split(".")
    else:
        print("UNKNOWN")
        continue
    if d.get(lst[-1].lower(),0)!=0:
        print(d[lst[-1].lower()])
    else:
        print("UNKNOWN")