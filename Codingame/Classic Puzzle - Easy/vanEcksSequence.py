#author : starkizard
#question at : https://www.codingame.com/ide/puzzle/van-ecks-sequence
a0=int(input())
n=int(input())
answer=[None]*(n)
answer[0],answer[1]=a0,0
lastindices={a0:0}
for i in range(2,n):
    if answer[i-1] not in lastindices:
        answer[i]=0
        lastindices[answer[i-1]]=i-1
    else:
        answer[i]=i-1 - lastindices[answer[i-1]]
        lastindices[answer[i-1]]=i-1
print(answer[-1])