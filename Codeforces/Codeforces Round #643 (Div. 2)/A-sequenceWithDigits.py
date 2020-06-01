# auth: starkizard
# if the minimum of digit becomes 0 at any point, the product will be zero and n will be unchanged, so break the loop when that happens
for t in range(int(input())):
    n,k=map(int,input().split())
    k-=1
 
    while(k>0):
        newn=n+int(min(str(n)))*int(max(str(n)))
        if newn==n:
            break
        n=newn
        k-=1
    print(n)    