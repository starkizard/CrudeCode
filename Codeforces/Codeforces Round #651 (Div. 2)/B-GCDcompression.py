def main():
    #CODE GOES HERE:
 
    for t in range(ii()):
        n=ii()
        a=li()
        odd=0
        even=0
        oddindex=[]
        evenindex=[]
 
        for i in range(2*n):
            if a[i]&1:
                odd+=1
                oddindex.append(i)
            else:
                even+=1
                evenindex.append(i)
        if odd&1:
            removeOdd=1
            removeEven=1
        else:
            if even>=2:
                removeEven=2
                removeOdd=0
            else:
                removeOdd=2
                removeEven=0
        while(removeOdd):
            oddindex.pop()
            removeOdd-=1
        while(removeEven):
            evenindex.pop()
            removeEven-=1
        i=0
        while i<len(oddindex)-1:
            print(oddindex[i]+1,oddindex[i+1]+1)
            i+=2
        i=0
        while i<len(evenindex)-1:
            print(evenindex[i]+1,evenindex[i+1]+1)  
            i+=2
