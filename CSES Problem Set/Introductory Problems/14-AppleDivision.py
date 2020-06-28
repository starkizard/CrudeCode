# auth: starkizard
# we need to divide the array into two subarrays such that the difference in sums is minimum
# if we find some subarray that has their sum as close to half of the sum of the whole array.
# that subarray and the left elements would give us the minimum difference. 
# we can see this question as like we have a knapsack of size sum(arr)/2 , and we have to fill elements from the array in it
# Here, a recursive solution for knapsack is implemented.

def knapsack(a,needed,n):
    if n==0 or needed==0:
        return 0
    if a[n-1]>needed:
        return knapsack(a,needed,n-1)
    else:
        return max(knapsack(a,needed,n-1),a[n-1]+knapsack(a,needed-a[n-1],n-1))

def main():
    n=ii()
    a=sorted(li())
    W=sum(a)//2
    ans=knapsack(a,W,n)
    print(abs(sum(a)-(2*ans)))
