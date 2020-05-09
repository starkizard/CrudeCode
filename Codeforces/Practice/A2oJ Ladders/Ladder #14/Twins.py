# auth: starkizard
# to get the minimum number of coins, we should take the coins with max value first, that's why we sort the array in decreasing order
# then for every element while our sum isn't greater than the sum of our twin, we keep adding coins to our sum and decrease it from other
n=int(input())
a=list(map(int,input().split()))
sum1=0
sum2=sum(a)
a.sort(reverse=True)
i=0
while(sum1<=sum2 and i<n):
    sum1+=a[i]
    sum2-=a[i]
    i+=1
print(i)