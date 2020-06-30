def checklength(n):
    if n==1:
        return 1
    if n==2:
        return 0
    if n&1:
        return 0
    c=math.log(n,2)
    if c==int(c):
        return 1
    for i in divs(n):
        if i!=1 and i&1:
            if checklength(n//i)==1:
                return 0
    return 1
def main():
    #CODE GOES HERE:
 
    for t in range(ii()):
        n=ii()
        if n==1:
            print("FastestFinger")
            continue
        if n<=3:
            print("Ashishgup")
            continue
        if n&1:
            print("Ashishgup")
            continue
        if checklength(n):
            print("FastestFinger")
        else:
            print("Ashishgup")
