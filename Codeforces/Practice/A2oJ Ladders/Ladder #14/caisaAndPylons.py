# auth: starkizard
# Go greedy!
# you need at list a[0] money to get to the first pylon, then i keep track of energy
# if i need additional energy, i pay just the amount to get me there
# in the sample test case 
# 5
# 3 4 3 2 4
# we first pay 3, too get to the first pylon, then we need additional one to get to 4, then our energy gets to 2 when we reach 2, and we can jump without any more
# so answer is 4

n=int(input())
a=list(map(int,input().split()))
answer=a[0]
energy=0
for i in range(1,n):
    if a[i]>a[i-1]:
        if energy>=a[i]-a[i-1]:
            energy-=(a[i]-a[i-1])
        else:
            answer+=(a[i]-a[i-1])-energy
            energy=0
    else:
        energy+=a[i-1]-a[i]
print(answer)
