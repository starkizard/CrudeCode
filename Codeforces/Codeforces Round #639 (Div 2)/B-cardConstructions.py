# auth: starkizard
# logic: actually doing what the question asked, but optimized.
# it can be optimized further into O(1) amortized , but the overhead takes a lot of time. If there were stronger test cases, that algo would have performed better
# here I'm precalculating the number of cards required to make a tower of size s
# the towers are just triangles of the sequence 1,3,6,10 ... removing the cards that lie on the base
# it would be ((number of triangles)*3)-s
# => (3s(s+1)-2s)/2
# storing all these values.. in possible array prematurely. then normal logic continue
# x denotes number of cards we have , we search in the possible array, till what point the value becomes bigger than n
# we add +1 to ans, denoting that we made a tower and then we reduce x by the number of cards needed to make the tower
# at the end of the loops, we'd have our answer
# there's a solution involving dp, in O(1), but as stated, the test cases here were weak and the overhead did take memory for no reason at all 
# contact if you want that dp sol.
possible=[2]
i=1
j=2
while possible[-1]<=10**9:
    i+=j
    possible.append(i*3 - j)
    j+=1
 
for _ in range(int(input())):
    ans=0
    x=int(input())
    while x >=2:
        pointer=0
        while pointer<len(possible)-1:
            if x>=possible[pointer+1]:
                pointer+=1
            else:
                break
        ans+=1
        x-=possible[pointer]
    print(ans)
