# auth: starkizard
# storing the previous value "eaten" in currentmax
# proceeding as the question syas using array implementation

for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    totalalice=0
    totalbob=0
    currentmax=0
    numberofmoves=0
    while(a!=[]):
        if numberofmoves%2==0:
            #alice's turn
            s=0
            i=0
            while(i<len(a)):
                if s>currentmax:
                    currentmax=s
                    break
                else:
                    s+=a[i]
                    totalalice+=a[i]
                    i+=1
            a=a[i:]
        else:
            #bob's turn
            s=0
            i=len(a)-1
            while(i>=0):
                if s>currentmax:
                    currentmax=s
                    break
                else:
                    s+=a[i]
                    totalbob+=a[i]
                    i-=1
            a=a[:i+1]
        numberofmoves+=1
    print(numberofmoves,totalalice,totalbob)