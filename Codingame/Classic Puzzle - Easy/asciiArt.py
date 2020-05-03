#auth: starkizard
#question at:https://www.codingame.com/ide/puzzle/ascii-art

import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
def strdiv(s,h):
    l=[]
    temp=""
    count=0
    for i in range(len(s)):
        temp+=s[i]
        count+=1
        if count==h:
            l.append(temp)
            count=0
            temp=""
    return l        
        
le = int(input())
h = int(input())
t = list(input())
ascii=[]
for i in t:
    if i.isalpha()==True:
        ascii.append(i.upper())
    else:
        ascii.append("?")
t=ascii[:]        
l=list("ABCDEFGHIJKLMNOPQRSTUVWXYZ?")
d={}
for i in l:
    d[i]=[]
for i in range(h):
    row=input()
    div=strdiv(row,le)
    k=0
    for j in div:
        d[l[k]].append(j)
        k+=1
rows=[]        
for i in range(h):
    s=""
    for j in t:
        s+=d[j][i]
    rows.append(s)

for i in rows:
    print(i)
    
