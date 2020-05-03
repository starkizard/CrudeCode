t=int(input())
for _ in range(t):
    n=int(input())
    m=n//2
    sum1,sum2=0,0
    i=1
    l=list(range(1,n+1))
    sum1+=2**n
    sum1+=2*(2**(m-1) -1)
        
    sum2=((2**(n+1)) -2)-sum1
    print(abs(sum2-sum1))
