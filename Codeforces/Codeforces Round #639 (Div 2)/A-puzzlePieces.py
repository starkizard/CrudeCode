#auth: starkizard
#this is only possible if we have one row or one column or they get interlocked in a 2 by 2 form
# if you add a row or a column to that 2 by 2, you'll find it impossible as a piece with two blanks are required
for t in range(int(input())):
    n,m=map(int,(input().split()))
    if n==1 or m==1:
        print("YES")
    elif n==2 and m==2:
        print("YES")
    else:
        print("NO")