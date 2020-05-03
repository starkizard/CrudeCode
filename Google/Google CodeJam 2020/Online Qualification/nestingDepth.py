#author: starkizard

# Logic, going greedily from left to right,
# for example let's have 14363 as input
# First we start at left, we encounter 1, so we open parentheses (insert one left parenthesis)
# Then we get 4, we already have 1 open, so we open 4-1 parentheses
# Now we encounter 3 , we have 4 open so we close 4-3 parentheses..
# going similarly we end up with the answer.
# And we're using the minimum parentheses required
# answer : (1(((4)3(((6)))3)))


t=int(input())
for _ in range(t):
    answer=""
    #taking input as list, 123 turns to [1,2,3]
    l=list(map(int,list(input())))
    #adding the first parenthesis for the first digit
    answer+="("*l[0]
    answer+=str(l[0])
    #main loop, opening or closing based on difference
    for i in range(1,len(l)):
        if l[i-1]<l[i]:
            answer+="("*abs(l[i-1]-l[i])
        elif l[i-1]>l[i]:
            answer+=")"*abs(l[i-1]-l[i])
        answer+=str(l[i])
    #adding ending parentheses for last digit
    answer+=")"*l[-1]
    print("Case #{}: {}".format(_+1,answer))