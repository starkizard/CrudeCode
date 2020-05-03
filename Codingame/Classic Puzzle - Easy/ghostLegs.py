#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/ghost-legs
import sys
import math
def swap(t,a,b):
    t[a],t[b]=t[b],t[a]
    return t
def find_all(a_str, sub):
    start = 0
    while True:
        start = a_str.find(sub, start)
        if start == -1: return
        yield start
        start += len(sub)
w, h = [int(i) for i in input().split()]
t=input().split("  ")
copy=t[:]
for i in range(h-2):
    line = input()
    for j in find_all(line,"--"):
        t=swap(t,j//3,j//3 +1)
end=input().split("  ")
ans={}
for i in range(len(t)):
    ans[t[i]]=end[i]
    
for i in copy:
    print(str(i)+str(ans[i]))
    