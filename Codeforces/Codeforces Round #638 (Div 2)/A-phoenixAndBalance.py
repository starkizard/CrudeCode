#auth: starkizard
# if we have elements growing exponentially, (2^n or more) the next element would be greater than the sum of all previous elements
# but, we have to divide the array into 2 halves right? so one half could be the biggest element plus the remaining most min elements
# rest of the array goes into different sum and print abs (sum1-sum2)
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
