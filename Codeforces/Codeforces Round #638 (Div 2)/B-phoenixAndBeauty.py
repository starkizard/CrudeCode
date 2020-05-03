#author: starkizard
def beautiful(arr,k):
    s=sum(arr[:k])
    bool=True
    for i in range(len(arr)-k+1):
        if sum(arr[i:i+k])!=s:
            bool=False
            return False
    return True
    
for t in range(int(input())):
    n,k=map(int,input().split())
    array=list(map(int,input().split()))
    if(beautiful(array,k)):
        print(len(array))
        print(*array)
    else:
        if k<len(set(array)):
            print(-1)
        else:
            answer=[]
            subarray=[]
            for i in set(array):
                subarray.append(i)
            for i in range(len(subarray),k):
                subarray.append(array[0])
            answer+=subarray*n
            if len(answer)>10000:
                print(-1)
            else:
                print(len(answer))
                print(*answer)
