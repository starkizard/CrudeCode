# auth: starkizard
# sum from 1 to n is n*(n+1)/2 
# if sum is odd you can't divide into two array of equal sums
# if it is even, we can split it always. we need to make an array having sum n(n+1)/4
# we put elements in the descending order , i.e from n, n-1,n-2 and so on and keep subtracting it from the reqd sum
# let's say we get till n-k+1 , and if you subtract n-k from current sum, you get negative. that means there is an integer from 1 to n-k , that will make the difference zero
# and that integer is the currentsum only.
# add all these elements into a set, and then iterate from 1 to n to find all the other elements and put it in the other set

def main():
    #CODE GOES HERE:

    n=ii()
    currentsum=(n*(n+1))//2
    if n<3:
        print("NO")
        return
    if currentsum &1:
        print("NO")
        return
    
    print("YES")
    s=set()
    i=n
    currentsum//=2
    while currentsum-i>=0:
        currentsum-=i
        s.add(i)
        i-=1
    if currentsum>0:
        s.add(currentsum)
    
    a=list(s)
    print(len(a))
    prr(sorted(a))
    b=[]
    for i in range(1,n+1):
        if i not in s:
            b.append(i)
    print(len(b))
    prr(b)
