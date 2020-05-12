# auth: starkizard
# I used DP. 
# Answer is an array of size n+1 first element 0 to fix indexing issues
# Every element denotes the max number of elements you can take as index multiples from that point
# So the answer would be just the max of this array

for t in range(int(input())):
    n=int(input())
    s=[None]+list(map(int,input().split()))
    answer=[0]*(n+1)
    for i in range(n,0,-1):
        if i>n/2:
            answer[i]=1
        else:
            multiplier=2
            j=i
            m=1
            while((j)*multiplier<=n):
                if s[j*multiplier]>s[j]:
                    m=max(m,1+answer[j*multiplier])
                multiplier+=1
            answer[i]=m
    print(max(answer))