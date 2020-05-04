#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/graffiti-on-the-fence
l=int(input())
n=int(input())
totalintervals=[]
for i in range(n):
    a,b=map(int,input().split())
    totalintervals.append((a,0))
    totalintervals.append((b,1))

painted=[(0,0)]
totalintervals.sort()
on=0
start,stop=0,0
for i in totalintervals:
    if i[1]==0:
        if on>0:
            on+=1
        else:
            start=i[0]
            on=1
    else:
        if on>1:
            on-=1
        else:
            on=0
            painted.append((start,i[0]))
painted.append((l,l))
someEmpty=False
for i in range(len(painted)-1):
    if painted[i][1]!=painted[i+1][0]:
        print(painted[i][1],painted[i+1][0])
        someEmpty=True
if someEmpty==False:
    print("All painted")
