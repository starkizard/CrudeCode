# auth: starkizard
# doing what's maentioned exactly, printing every step not storing it in array cause saving memory
def main():
    #CODE GOES HERE:
    n=ii()
    print(n,end=" ")
    while(n!=1):
        if n&1:
            n=3*n+1
        else:
            n//=2
        print(n,end=" ")
    print()
    
 
