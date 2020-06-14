# auth: starkizard
# if a[i]> i+1 anytime , the answer would be -1. for example if our array is 1 1 4 4
# TO have a minimum of 4 at index 2. we should have 0 1 2 3 earlier. There's not enough possible spaces for it.
# else, We make an observation
# whenever a[i]!=a[i-1], b[i] must be a[i-1]
# and we'll fill the rest elements avoiding all elements of a in increasing order. (As we need to fulfil all the numbers (0,1,2,3) in case we want to have minimum 4

def main():
    #CODE GOES HERE:
    n=ii()
    a=li()
    for i in range(n):
        if a[i]>i+1:
            print(-1)
            return
    b=[-1]*n
    s=set(a)
    for i in range(1,n):
        if(a[i]!=a[i-1]):
            b[i]=a[i-1]
    element=0
    for i in range(n):
        while element in s:
            element+=1
        if b[i]==-1:
            b[i]=element
            element+=1
 
    prr(b)
 
 
