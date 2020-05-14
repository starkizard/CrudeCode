# auth: starkizard
# if n==1 the ans is 0 , trivial
# for n==2 the ans is m , trivial
# if n is greater than 2, and m is 5
# we can 0 5 0 0 0..n times
# the answer ould be 5*2 no matter if you split the 5 into different sums (ike given in test case)
# at least 3 spaces are needed once we get it
# The answer is 2*m
for t in range(int(input())):
    n,m=map(int,input().split())
    if n==1:
        print(0)
    elif n==2:
        print(m)
    else:
        print(m*2)