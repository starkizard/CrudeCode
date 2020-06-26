# auth: starkizard
# Choosing optimally, we'll take 2 coins from the pile that is bigger and one coin from the pile that's smaller
# let a be the bigger pile and b be the smaller pile, lets say we can do this operation k times until these both become equal
# a-2k = b-k
# k=a-b
# so, we know that a and b would become , b-k , i.e, b-(a-b) , i.e, 2b-a
# if a >2b, they would become negative, so print no
# then we can see that after a and b become equal. they become equal in gaps of 3
# lets say we are at x x
# we take 2 from first pile and 1 from the second pile
# we have x-2 x-1
# now , we take 2 from the second pile and 1 from the first pile
# we have x-3 x-3
# so , our aim is to land on 0 0
# it can be only done when we have a multiple of 3.
# like, 6 6
# 3 3
# 0 0



def main():
    #code goes here
    for t in range(ii()):
        a,b=mi()
        a,b=max(a,b),min(a,b)
        if a>2*b:
            print("NO")
            continue
        k=a-b
        b=b-k
        if b%3==0:
            print("YES")
        else:
            print("NO")
