# auth: starkizard
# We need to fill the matrix cyclically
# First calculate the minimum amount of 1 we have to fill in every row/coloumn, that will be k//n
# We fill it cyclically
# for example if k is 10 and n is 4, 
# k//n is 2.
# so we first start building the matrix.
#   1100
#   0110
#   0011
#   1001
# by this method we already filled 2 1s in every row and column , walkthrough the code for implementation
# now , we'll have k%n elements left.
# we continue filling them cyclically
# now the array becomes:

#   1110
#   0111
#   0011
#   1001

# the answer would be 2 in this case, whenever k%n is not zero
# because there' will be a difference of 1 in max row - min row , and a difference of 1 in max col - min col

# answer is 0 , if k//n is zero

def main():
    for t in range(ii()):
        n,k=mi()
        matrix=[]
        init=k//n
        for i in range(n):
            row=[0 for j in range(n)]
            for x in range(init):
                row[(i+x)%n]=1
            matrix.append(row)
        rem=k-(init*n)
        for i in range(rem):
            index=(i+init)%n
            matrix[i][index]=1
        if rem==0:
            print(0)
        else:
            print(2)
        for i in matrix:
            for j in i:
                print(j,end="")
            print()
 
