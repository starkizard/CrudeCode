# auth: starkizard
# Extracted from template
# Calculate the number of consecutive zeros and insert one's accordingly . 
# can be done by storing the indexes of "1" in an array .
# number of zeroes that are k far from the nearest ones should be considered . and then the ceil of this value/(k+1) should be added for every pair of indexes of "1"
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        n,k=mi()
        s=input()
        l=[]
        for i in range(n):
            if s[i]=="1":
                l.append(i)
        count=0
        if l==[]:
            l.append(0)
            count+=1
        start=math.ceil((l[0]-k)/(k+1))
        if start>0:
            count+=start
 
        for i in range(len(l)-1):
            temp=math.ceil((l[i+1]-l[i]-1-2*k)/(k+1))
            if temp>0:
                count+=temp
        end=math.ceil((n-l[-1]-1-k)/(k+1))
        if end>0:
            count+=end
        print(int(count))            
