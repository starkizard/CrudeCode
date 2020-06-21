# auth: starkizard
# printing all the odd elements first in descending order and then the even elements should work
# the only case where the largest even and the smallest odd (1) have the difference of 1 is in case of n=2 or 3
def main():
    #CODE GOES HERE:
    n=ii()
    if n<=3 and n>1:
        print("NO SOLUTION")
    else:
        if n&1:
            odd=n
            even=n-1
        else:
            odd=n-1
            even=n
        prr(list(range(odd,0,-2)),end=" ")
        prr(list(range(even,1,-2)))
