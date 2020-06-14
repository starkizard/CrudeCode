# auth: starkizard
# We make an observation
# whenever a[i]!=a[i-1], b[i] must be a[i-1]
# and we'll fill the rest elements avoiding all elements of a in increasing order. (As we need to fulfil all the numbers (0,1,2,3) in case we want to have minimum 4

def main():
    #CODE GOES HERE:
    n=ii()
    a=li()
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
 
 
