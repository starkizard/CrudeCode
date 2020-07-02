# auth : starkizard
# let's look at the main diagonal, we get 1 3 7 13 21 
# on close notice we can see this sequence can be formed by the recursion a(n)=a(n-1)+2*(n-1),a(1)=1
# solving this recurrence , we get a(n) = n(n-1) + 1
# now to find a number at row y and coloumn x, we first find n(n-1)+1 for n=max(y,x)
# this makes us to go to the main diagonal , now we'll have two options , to go right or to go up
# another pattern is noticed. the number to be reached when n is odd would be (n*(n-1) +1 + x-y) and (n*(n-1) + 1 + y-x) if even
# solved in O(1)!!
def main():
    #CODE GOES HERE:

    for t in range(ii()):
        y,x=mi()
        n=max(y,x)
        answer=n*(n-1) +1
        # if n is odd , up is increasing left is decreasing
        if n&1:
            print(answer+(x-y))
        else:
            print(answer+(y-x))
