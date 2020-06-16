# auth: starkizard
# calculate the number of odd numbers
# if they're not equal to n/2 it's impossible (check cases, cannot be paired)
# else just count the number of odds that aren't in correct position.
# there'll be equal number of evens that are not in position hence.
# so the number of mismatches is the answer
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        n=ii()
        a=li()
        odd=0
        for i in a:
            if i%2!=0:
                odd+=1
 
        if (odd!=n//2):
            print(-1)
            continue
        mismatches=0
        for i in range(n):
            if a[i]%2==1 and i%2==0:
                mismatches+=1
        print(mismatches)
