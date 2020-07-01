# auth: starkizard
# sort the array, take two pointer l (pointing to left ) and r (pointing to right)
# if we can take both these pointers. then increase l and decrease r. we put both in the gondola
# if we cannot, means that the right one cannot be paired with the left one, it has to have a seperate gondola. so only decrease r and increase the count
# if l==r, only one element left. it has it's own gondola
def main():
    n,x=mi()
    p=sorted(li())
    l,r=0,n-1
    count=0
    while(l<=r):
        if l==r:
            count+=1
            break
        if p[l]+p[r]<=x:
            l+=1
        r-=1
        count+=1
    print(count)
