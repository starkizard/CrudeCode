#auth: starkizard
# If n is even, then the lowest factor other than 1 will be always 2.
# and then it'll stay even after adding, so, our answer will be n+(2*k)
#if n is odd, just find the lowest factor first, that will be odd too. add it to n, then n will become even
# answer would be new n + 2*(k-1)

for t in range(int(input())):
    n,k=map(int,input().split())
    if n%2==0:
        print(n+2*k)
    else:
        for i in range(3,n+1):
            if n%i==0:
                break
        n=n+i
        k-=1
        print(n+2*k)