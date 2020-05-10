# auth : starkizard
# if n<4 it's impossible
# else the logic i'm using is here
# if n is even, Start with odds
# go on till n
# then flip the last two elements
# 
# here, the difference is max 4, as we go from n-5 n-3 n-1 to n-5 n-1 n-3
# then we put n and go till 2 .
# general sequence:
# 1 3 5 7 ... n-5 n-1 n-3 n n-2 n-4 n-6 ... 6 4 2
# in these permutations the absolute difference between any two pairs is between 2 and 4 inclusive
#
# if n is odd, start with evens you'll get the same result.

for t in range(int(input())):
    n=int(input())
    if n<4:
        print(-1)
    elif n==4:
        print("3 1 4 2")
    else:
        answer=[]
        if n%2==0:
            odd=list(range(1,n+1,2))
            odd[-1],odd[-2]=odd[-2],odd[-1]
            answer+=odd
            answer+=list(range(n,0,-2))
        else:
            even=list(range(2,n+1,2))
            even[-1],even[-2]=even[-2],even[-1]
            answer+=even
            answer+=list(range(n,0,-2))
        print(*answer)