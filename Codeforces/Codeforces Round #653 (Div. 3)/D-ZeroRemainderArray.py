# auth: starkizard
# We can notice that to make every element divisible by k,
# we only need to increase elements by k-(i%k) for every element i in the array
# Walkthrough this implementation to see what i did.
def main():
    #code goes here
    for t in range(ii()):
        n,k=mi()
        a=li()
        b=[i%k for i in a]
        if b==[0]*len(b):
            print(0)
            continue
        d={}
        for i in b:
            if i==0:
                continue
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        m=0
        maxi=-1
        for i in d:
            if d[i]>m:
                m=d[i]
                maxi=i
            if d[i]==m:
                if i<maxi:
                    maxi=i
        
        index=((k-maxi)%k) +1
        ans=(k*m) - (k-index)
        print(ans)
                
