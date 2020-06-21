# auth: starkizard
# Total ways to put two knights if we just ignore the capture squares will be n^2 * (n^2 -1 ) [n*n squares for the first knight to go to and n*n -1 squares for the other knight]
# Considering cases where attacks can be made:
#
# 1-> If the knight is at one corner it takes away two spaces , and as there are four corners , 8 possibilities should be removed
# 2-> If the knight is in the first column 2nd square (for eg a2 in a chessboard) , then it attacks 3 squares. there are8 such possibilities (1st row 2nd element and 2nd last elements, last row 2nd and 2nd last,same for coloumns.), so 8*3 = 24
# 3-> If the knight is in any else cell in the first/last row/column, it attacks 4 squares there are 4*(n-4) such squares where this could happen , so we also need to subtract 4*4*(n-4)
# 4-> If the knight is at the corner of the (n-2) sided square , it will attack 4 sqaures, there are 4 corners , so 4*4= 16
# 5-> If the knight is at the edge of this (n-2) sided square, it will attack 6 squares, and there are 4*(n-4) squares , so 4*6*(n-4)
# 6-> rest all squares knights attack 8 squares, so remaining squares is (n-4)*(n-4), we need to subtract 8*(n-4)*(n-4)
# 
# Also, we need to divide the answer by two, because we're counting every attack two times.

def main():
    #CODE GOES HERE:

    x=ii()
    for n in range(1,x+1):
        print( ((n*n)*(n*n -1) - 8 - 24 - 4*4*(n-4) -16 - 6*4*(n-4) - 8*(n-4)*(n-4))//2 )
    
