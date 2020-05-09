# auth: starkizard
# storing letter frequencies in a dictionary, if any letter's frequency is not divisible by k, it's impossible
# because we need to have k identical parts of the string
# if they are , I make a single part by putting frequency/k letter's of each letter into it, and repeating the part k times

k=int(input())
s=input()
d={k:s.count(k) for k in set(s)}
check=True
for i in d:
    if d[i]%k!=0:
        check=False
        break
if check==False:
    print(-1)
else:
    answer=""
    for i in d:
        answer+=i*(d[i]//k)
    print(answer*k)
    
