#author: starkizard
#Logic is that We only care that the start of all input strings (until the first *) are compatible to each other
# same thing with the end, (After the last *)
#if at any point we see that the patterns are not compatible, answer is *
#or else we take the max start possible and max end possible, add everything in the middle (we don't care about the string to be minimum)

for t in range(int(input())):
    
    n=int(input())
    #max start and end, and all the mid elements, and the final answer
    start,mid,end,answer="","","",""
    #not storing the patterns anywhere, doing on the fly
    for i in range(n):
        #boolean start and end, 0 denotes this string doesn't start/end with * , 1 otherwise
        bstart,bend=0,0
        s=input()
        if answer=="*":
            #can't break because if more inputs pending, it'll mess up next test cases
            continue
        l=s.split("*")
        #The Input string starts with *
        if s[0]=="*": bstart=1;
        #The input string ends with *
        if s[-1]=="*": bend=1;
        #if this string starts with something other than *
        if bstart==0:
            #check if start is compatible, If it ain't answer is * (impossible), update start if needed
            if l[0].startswith(start) or start=="":
                start=l[0]
            elif start.startswith(l[0]):
                pass
            else:
                answer="*"
            #mid starts from the second element of the list
            midstart=1
        else:
            #if string starts with *, the mid starts at 0,i.e first element
            midstart=0
        if bend==0:
            #exactly same logic for end
            if l[-1].endswith(end) or end=="":
                end=l[-1]
            elif end.endswith(l[-1]):
                pass
            else:
                answer="*"
            midend=-1
        else:
            midend=len(l)
        #the middle list
        midlist=l[midstart:midend]
        #concatenating to the middle string
        mid+="".join(midlist)
    #if not impossible
    if answer!="*":
        answer=start+mid+end
    print("Case #{}: {}".format(t+1,answer))