# auth: starkizard
# using a coutn list c to count all the occurences of a number, max n.
# then in O(n^2) i calculate the consecutive elements and their sums, whenever sum >n i don't consider further sums
# whenever the sum is equal to a number in the array, that is if the c[number] !=0, i add the count to the answer and make the count 0.
# this way we'll get our answer

for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    c=[0]*n
    for i in a:
        c[i-1]+=1
    answer=0
    for i in range(n-1):
        s=a[i]
        for j in range(i+1,n):
            s+=a[j]
            if s>n:
                break
            if c[s-1]!=0:
                answer+=c[s-1]
                c[s-1]=0
    print(answer)

            