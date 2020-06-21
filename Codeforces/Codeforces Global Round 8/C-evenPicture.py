# auth: starkizard
# Try making the solution for n=1
# You'll see that you need four edges anyways and to make the rest of the gray cells to have 2 neighbours, we can put one on the top left corner and the bottom right corner:
# eg:
# 1 1 0
# 1 1 1
# 0 1 1
# here 1- gray 0- empty
# Trying for n=2 , we can place the gray cells with 4 neighbors diagonally and see a pattern:
# ===>
# 0 1 0 0
# 1 1 1 0
# 0 1 1 1
# 0 0 1 0

# now we to make every other edge have two neighbours we can again make top left element and bottom left element gray, it becomes:
# 1 1 0 0
# 1 1 1 0
# 0 1 1 1
# 0 0 1 1

# to print the pattern for any n, we start by 0 0 , 0 1 (top 2)
# then for i from 1 to n, we can print (i, i-1),(i,i) and (i,i+1)
# then the last two would be (n+1,n) and (n+1,n+1)

def main():
    #CODE GOES HERE:
    n=ii()
    print(3*n +4)
    print("0 0")
    print("0 1")
    for i in range(1,n+1):
        print(i,i)
        print(i,i-1)
        print(i ,i+1)
    print(i+1 ,i)
    print(i+1 ,i+1)
 
