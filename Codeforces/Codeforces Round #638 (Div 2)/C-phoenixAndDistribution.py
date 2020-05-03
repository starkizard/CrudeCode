#author: starkizard
for t in range(int(input())):
    n,k=map(int,input().split())
    s=sorted(input())
    answer=""
    temp=s[:k]
    if len(set(temp))>1:
        answer=s[k-1]
    else:
        answer+=s[0]
        rest=s[k:]
        if len(set(rest))>1:
            answer+="".join(rest)
        elif len(rest)>0:
            answer+=rest[0]*(len(rest)//k)
            if len(rest)%k!=0:
                answer+=rest[0]
    print(answer)
