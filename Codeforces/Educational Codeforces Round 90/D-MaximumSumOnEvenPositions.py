def maxDiff(arr):
    arr_size=len(arr) 
    if arr_size in [1,0]:
        return 0
    max_diff = arr[1] - arr[0] 
    min_element = arr[0] 
      
    for i in range( 1, arr_size ): 
        if (arr[i] - min_element > max_diff): 
            max_diff = arr[i] - min_element 
      
        if (arr[i] < min_element): 
            min_element = arr[i] 
    return max_diff 
 
def main():
    #code goes here
    for t in range(ii()):
        n=ii()
        a=li()
        odd=[0]
        even=[0]
        oddsum=0
        evensum=0
        for i in range(n):
            if (i+1)%2==0:
                evensum+=a[i]
            else:
                oddsum+=a[i]
            odd.append(oddsum)
            even.append(evensum)
        diff=[]
        for i in range(n+1):
            diff.append(even[i]-odd[i])
        maxupgrade=0
        diff1=[]
        diff2=[]
        for i in range(n+1):
            if i%2==0:
                diff1.append(diff[i])
            else:
                diff2.append(diff[i])
        maxupgrade=max(0,maxDiff(diff2),maxDiff(diff1))
        print(odd[-1]+maxupgrade)
