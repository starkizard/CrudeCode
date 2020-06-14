
# Auth: starkizard
# extracted from PyPy2 template (Don't run it straight forwardly)
# We need to find max subarray who's sum is not divisible by x.
# if the whole arrays sum is not divisible by x then the whole array is the subarray
# else we need to take out some k from the array where k%x!=0
# we can only remove from left or right.
# thus we take the minimum number of numbers to be removed from left or right and print it after subtracting from n
###################################################################
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        n,x=mi()
        a=li()
        s=sum(a)
        if s%x!=0:
            print(n)
        else:
            count=0
            for i in range(n):
                if a[i]%x!=0:
                    break
                else:
                    count+=1
            count2=0
            for i in range(n-1,-1,-1):
                if a[i]%x!=0:
                    break
                else:
                    count2+=1
            count=min(count,count2)+1
            print(n-count)
 
