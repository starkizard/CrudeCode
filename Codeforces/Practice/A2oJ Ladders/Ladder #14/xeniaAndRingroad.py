# auth: starkizard
# answer variable denotes the answer, current denotes the index we're at, once we're at a greater index than the index we need to go
# we add n-current + i , then we reach i.

n,m=map(int,input().split())
a=list(map(int,input().split()))
answer=0
current=1
for i in a:
    if current<=i:
        answer+=i-current
    else:
        answer+=(n-current)+i
    current=i
print(answer)
