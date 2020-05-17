# auth: starkizard
# implementation heavy
# used merging like behaviour
# calculating indexes and the length of the longest contiguos subsequence of 0s in one for loop
# then for all the subsequences from left to right, i make the operation increse the count 
# if at anytime count >n, return
# l0 refers to the length of the max contiguous subarray of 0s
def solve(arr,n):
    count=1
    while count<=n:
        l0=0
        current=0
        indexes=[]
        for i in range(n):
            if arr[i]==0:
                current+=1
                if i==n-1:
                    if current>l0:
                        l0=current
                        indexes=[i-l0+1]
                    elif current==l0:
                        indexes.append(i-l0+1)
                    else:
                        pass
            else:
                if current>l0:
                    l0=current
                    indexes=[i-l0]
                elif current==l0:
                    indexes.append(i-l0)
                else:
                    pass
                current=0  
        # indexes=list(find_all(arr,l0))
        for i in indexes:
            if count>n:
                break
            if i+l0%2==0:
                arr[(i+(i+l0-1)-1) //2]=count
            else:
                arr[ (i+(i+l0-1)) //2 ]=count
            count+=1
    return arr
        
        

for t in range(int(input())):
    n=int(input())
    arr=[0 for _ in range(n)]
    print(*solve(arr,n))