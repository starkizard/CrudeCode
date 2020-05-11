# auth: starkizard
# O(nlogn) solution
# we sort the list in O(nlogn), then we check for we calculate the min of all a[i]-a[i+n-1]
# for i from 0 to m-n

n,m=map(int,input().split())
a=sorted(list(map(int,input().split())))
mi=float("inf")
for i in range(m-n+1):
    mi=min(mi,abs(a[i]-a[i+n-1]))
print(mi)