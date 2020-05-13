 # given an array of distinct integers a,
 # find two numbers that sum upto a number k
 # for eg.
 # [3,5,-4,8,11,1,-1,6] , 10
 # return [11, -1] 
 # if multiple answers, print any , return empty list if not possible
 # 
 # 

# time: O(n^2) space:O(1)
# simple two for loops
def solve(arr,k):
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[i]+arr[j]==k:
                return [arr[i],arr[j]]
    return []

#time : O(n) space: O(n)
# using hashing (dictionary in python)
def solve2(arr,k):
    seen={}
    for i in arr:
        #this takes O(1) searching in a dictionary
        if k-i in seen:
            return [k-i,i]
        seen[i]=True
    return []        

# time : O(nlogn) space : O(1)
# using the fact that if we make the array sorted,
# have two pointers first at start of list and at end of list
# if their sum is lesser than k, we move the left pointer one space towards right and repeat
# if their sum is greater , we move the right pointer one space towards left
# if it get's equal, we return the value
# it's easy to see why we move the pointers in that particular way
def solve3(arr,k):
    l=0
    r=len(arr)-1
    while l<r:
        s=arr[l]+arr[r]
        if s>k:
            r-=1
        elif s<k:
            l+=1
        else:
            return [arr[l],arr[r]]
    return []

# Both solve2 and solve3 are efficient, you need to adapt to when asked for the tradeoff
# time vs memory



