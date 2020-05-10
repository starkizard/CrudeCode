#auth: starkizard
#for every digit except 0 , print digit*(10^(len(n) - index -1) )

for t in range(int(input())):
    n=list(input())
    answer=[]
    for i in range(len(n)):
        if n[i]=="0":
            continue
        else:
            answer.append(int(n[i])*(10** (len(n)-i-1) ))
    print(len(answer))
    print(*answer)