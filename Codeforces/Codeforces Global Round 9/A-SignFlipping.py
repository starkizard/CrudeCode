# auth: starkizard
# make the first element positive, second element negative, third positive, and so on
# we will satisfy the given conditions
def main(): 
    for t in range(ii()):
        n=ii()
        a=li()
        for i in range(n):
            if i&1:
                print(-abs(a[i]),end=" ")
            else:
                print(abs(a[i]),end=" ")
        print()
