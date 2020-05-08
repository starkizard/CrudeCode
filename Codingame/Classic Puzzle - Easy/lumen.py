#author : starkizard
#question at : https://www.codingame.com/ide/puzzle/lumen
n=int(input())
l=int(input())
C=set()
for i in range(n):
    line=input().split()
    for j in range(len(line)):
        if line[j]=="C":
            C.add((i,j))

count=0
for i in range(n):
    for j in range(n):
        check=0
        for x,y in C:
            if abs(x-i)<l and abs(y-j)<l:
                count+=1
                break
print(n*n -count)

