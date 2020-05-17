# auth: starkizard
# LOGIC:
# Regarding every block as being influenced by gravity
# just like sand in minecraft
# now look at this 
# 
# A A
# A B
# A B
# A B
# A B
#
#
#
# If As are put first in this config, the 1st row 2nd A , will fall right?
# So, to make a stable wall , We need to first add Bs and then add As

# now consider this:
#
# A A
# A B
# A B
# A A
#
# If As are put first in this config, the 1st row 2nd A will fall
# and if Bs are put first the 3rd row 2nd B will fall.
# No matter which of these two we put we can't make the wall
#
# This is because B is dependent on A for not falling, And A is dependent on B for not falling
# 
# 
# Now at start there must be at least one alphabet, which is not dependent on anything else
# in sample test case 1, O depends on Z , A depends on O nd M depends on O.
# Note that an alphabet can depend on multiple alphabets.
# 
# Here Z isn't dependent on Anything, so we put Z in our answer
# now when we put Z in our answer , conditions for O is satisfied
# now we can put O.
# when we put O, conditions for both M and A are satified. We can put them in any order

# so by doing this if you get stuck and have no option to make, it's impossible (Deadlock)
# 
# implementation is done here:->

for t in range(int(input())):
    wall=[]
    r,c=map(int,input().split())
    for i in range(r):
        temp=list(input())
        wall.append(temp)

    d={i:set() for i in all}
    answer=""
    wall=wall[::-1]
    for i in range(1,r):
        for j in range(c):
            if wall[i][j]!=wall[i-1][j]:
                d[wall[i][j]].add(wall[i-1][j])
    stack=[]
    for i in d:
        if d[i]==set():
            stack.append(i)
            answer+=i
    if stack==[]:
        answer=-1
    else:
        while(stack!=[]):
            a=stack.pop(0)
            for i in d:
                if a in d[i]:
                    d[i].remove(a)
                    if d[i]==set():
                        stack.append(i)
                        answer+=i
            
    for i in d:
        if d[i]!=set():
            answer=-1
            break
    print("Case #{}: {}".format(t+1,answer))
