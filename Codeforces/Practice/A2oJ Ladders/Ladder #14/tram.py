# auth: starkizard
# variable m stores the max amount of people who are present at any time, that's the answer.
# count stores current people
m=0
count=0
for n in range(int(input())):
    a,b=map(int,input().split())
    count-=a
    count+=b
    m=max(count,m)
print(m)
