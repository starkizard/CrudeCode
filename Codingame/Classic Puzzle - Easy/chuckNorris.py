#auth:starkizard
#question at:https://www.codingame.com/ide/puzzle/chuck-norris
import sys
import math
message =list(input())
ascii=[bin(ord(i))[2:] for i in message]
pqrs=[]
for i in ascii:
    pqrs.append("0"*(7-len(i))+i)
asc="".join(pqrs)
s=""
l=[]
temp=asc[0]
for i in asc[1:]:
    if i in temp:
        temp+=i
    else:
        l.append(temp)
        temp=i
l.append(temp)        
for i in l:
    if "1" in i:
        s+="0 "+"0"*len(i)+" "
    else:
        s+="00 "+"0"*len(i)+" "
print(s[:-1])    
    
