# auth: starkizard
# Precalculating gcd from arr[i:] for i in range(n) in O(n)
# by going reverse.
# then using the fact that LCM's can be distributed over GCD and vice versa


#  For integers N1, ..., Nk, k ≥ 2,

# lcm(gcd(N1, M), gcd(N2, M), ..., gcd(Nk, M)) = gcd(lcm(N1, ..., Nk), M)
# gcd(lcm(N1, M), lcm(N2, M), ..., lcm(Nk, M)) = lcm(gcd(N1, ..., Nk), M). 

def gcd(a,b): 
    if a == 0: 
        return b 
    return gcd(b % a, a) 
def lcm(a,b):
    return (a*b)//gcd(a,b)
    
    
    
n=int(input())
a=list(map(int,input().split()))
gcda=[a[-1]]
m=a[::-1]
for i in range(1,n):
    gcda.append(gcd(gcda[-1],m[i]))
gcda=gcda[::-1]
answer=lcm(a[0],gcda[1])
for i in range(1,len(a)):
    if i==len(a)-1:
        continue
    else:
        answer=gcd(answer,lcm(a[i],gcda[i+1]))
    if answer==1:
        break
print(answer)