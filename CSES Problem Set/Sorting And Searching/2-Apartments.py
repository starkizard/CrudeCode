# auth: starkizard
# sort both arrays
# if demand is higher, look for the next apartment , if apartment is higher, look for the next applicant
# if it's satisfied, alot it and increase the count.
def main():
    n,m,k=mi()
    a=sorted(li())
    b=sorted(li())
    count=0
    j=0
    i=0
    while i<n and j<m:
        if a[i]>b[j]+k:
            j+=1
        elif abs(a[i]-b[j])<=k:
            i+=1
            j+=1
            count+=1
        else:
            i+=1
    print(count)

