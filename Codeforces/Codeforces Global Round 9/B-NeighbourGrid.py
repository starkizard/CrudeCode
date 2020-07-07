# auth: starkizard
# as we can increase any element any number of times, we can settle for one type of pattern for every solution.
# like for n=3, m=4 we can get:
#   2 3 3 2
#   3 4 4 3
#   2 3 3 2

# These are the max values possible for every cell, if in the given array, any value is greater than this, It's impossible , we'll print No, Otherwise We'll make every array equal to this pattern
def main(): 
    for t in range(ii()):
        n,m=mi()
        check=True
        for i in range(n):
            c=li()
            if i==0 or i==n-1:
                if c[0]>=3 or c[-1]>=3:
                    check=False
                for j in range(1,m-1):
                    if c[j]>=4:
                        check=False
            else:
                if c[0]>=4 or c[-1]>=4:
                    check=False
                for j in range(1,m-1):
                    if c[j]>=5:
                        check=False
        if check:
            print("YES")
            for i in range(n):
                if i==0 or i==n-1:
                    print(2,end=" ")
                    for j in range(m-2):
                        print(3,end=" ")
                    print(2)
                else:
                    print(3,end=" ")
                    for j in range(m-2):
                        print(4,end=" ")
                    print(3)
        else:
            print("NO")
