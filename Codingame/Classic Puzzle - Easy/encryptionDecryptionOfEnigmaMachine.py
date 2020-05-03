#author: starkizard
#question at : https://www.codingame.com/ide/puzzle/encryptiondecryption-of-enigma-machine
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
s="A B C D E F G H I J K L M N O P Q R S T U V W X Y Z".split()
l=[{},{},{}]
z=[{},{},{}]
operation = input()
n = int(input())
for i in range(3):
    rot = input()
    rotor=[st for st in rot]
    for j in range(26):
        l[i][s[j]]=rotor[j]
        z[i][rotor[j]]=s[j]
    
message = input()
z=z[::-1]
if operation=="ENCODE":
    newm=""
    for i in message:
        if n==26:
            n=0
        if ord(i)+n > ord("Z"):
            newm+=chr(ord(i)+n-26)
        else:
            newm+=chr(ord(i)+n)
        n+=1
    ans=""    
    for i in newm:
        ans+=l[2][l[1][l[0][i]]]
            
else:
    oldm=""
    for i in message:
        oldm+=z[2][z[1][z[0][i]]]
    ans=""
    for i in oldm:
        if n==26:
            n=0
        if ord(i)-n<ord("A"):
            ans+=chr(ord(i)-n+26)
        else:
            ans+=chr(ord(i)-n)
        n+=1    
        
print(ans)
