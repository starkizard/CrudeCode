# auth: starkizard
# The most efficient way would be to get everything to the center clock of the odd square matrix
# for example for 3, the center cell is surrounded by 8 cells
# each one distance apart
# as the number increases, the distance increases
# for 5 , the answer is just answer of 3 plus number of cells at distance 2  (the most outward layer)
# the number of cells in the most outward layer would be 4*n-4 (taking full 4 sides subtracting repeated corners)
# this leads to a precalculation. We calculate till max n and store al the values in an array
# and we straightaway refer the array
a=[]
multiplier=1
for i in range(500000):
    if i==0 or i==1:
        a.append(0)
    else:
        n=2*i -1
        a.append(a[-1]+(2*n + 2*(n-2))*multiplier)
        multiplier+=1
for t in range(int(input())):
    n=int(input())
    print(a[(n+1)//2])