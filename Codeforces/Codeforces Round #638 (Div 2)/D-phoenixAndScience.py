#author: starkizard
import bisect
for _ in range(int(input())):
    n=int(input())
    growth=[]
    s=0
    i=1
    while(s<=n):
       if(s+i>n): break
       growth.append(i)
       s+=i
       i*=2 

    if n!=s: bisect.insort(growth,n-s)
    print(len(growth)-1)
    print(*[growth[i]-growth[i-1] for i in range(1,len(growth))])
    