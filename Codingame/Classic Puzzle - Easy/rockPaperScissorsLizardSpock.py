#author: starkizard
#question at : https://www.codingame.com/ide/puzzle/rock-paper-scissors-lizard-spock
n=int(input())
round=[]
for i in range(n):
    a,b=input().split()
    a=int(a)
    round.append([a,b])
while(len(round)!=1):
    newround=[]
    for i in range(0,len(round),2):
        if round[i][1]==round[i+1][1]:
            if round[i][0]<round[i+1][0]:
                win=0
            else:
                win=1
        elif round[i][1]=="R":
            if round[i+1][1]=="L" or round[i+1][1]=="C":
                win=0
            else:
                win=1
        elif round[i][1]=="P":
            if round[i+1][1]=="R" or round[i+1][1]=="S":
                win=0
            else:
                win=1
        elif round[i][1]=="C":
            if round[i+1][1]=="P" or round[i+1][1]=="L":
                win=0
            else:
                win=1
        elif round[i][1]=="L":
            if round[i+1][1]=="S" or round[i+1][1]=="P":
                win=0
            else:
                win=1
        else:
            if round[i+1][1]=="C" or round[i+1][1]=="R":
                win=0
            else:
                win=1
        if win==0:
            newround.append(round[i]+[round[i+1][0]])
        else:
            newround.append(round[i+1]+[round[i][0]])
    round=newround[:]
print(round[0][0])
print(*round[0][2:])