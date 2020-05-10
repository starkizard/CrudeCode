# auth: starkizard
# If k > n it's impossible, the minimum we can get from k elements is 1+1+1..k times that is k
# if n is odd, and if k is even it's impossible, as even number of elements (all odd or all even ) will always produce an even number
# if n is odd and k is odd, have k-1 times 1 then n-k+1 as last element
# if n is even and k is even, we can again have k-1 times 1 then n-k+1 as last element
# if n is even and k is odd, it means we need to get all eeven elements, 
# thus every element should be at leas 2
# so if n< 2*k , it's impossible
# else print k-1 times 2 and have n-(2*(k-1)) as your last element

for t in range(int(input())):
    n,k=map(int,input().split())
    if k>n:
        print("NO")
        continue
    
    if n%2==1:
        if k%2==0:
            print("NO")
            continue
        else:
            print("YES")
            print("1 "*(k-1)+str(n-k+1))
 
    else:
        if k%2==0:
            print("YES")
            print("1 "*(k-1)+str(n-k+1))
        else:
            if n<2*k:
                print("NO")
            else:
                print("YES")
                print("2 "*(k-1)+ str(n-2*(k-1)))
