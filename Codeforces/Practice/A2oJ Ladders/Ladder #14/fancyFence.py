# auth: starkizard
# we know that the sum of exterior angles of a regular polygon is 360
# so for a to be an interior angle, the exterior angle should perfectly divide 360 for the number of sides the polygon has
for t in range(int(input())):
    a=int(input())
    if(360%(180-a)==0):
        print("YES")
    else:
        print("NO")