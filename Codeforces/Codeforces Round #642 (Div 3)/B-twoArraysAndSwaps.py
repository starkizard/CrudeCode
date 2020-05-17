# auth: starkizard
# swapping is only beneficial if we replace the min of a with the max of b  if the min of a is lesser
# sorting the two lists and having two pointers
# one to the start of a and one to the end of b
# for k times if the value at a pointer < value at b pointer swapping is done
# a pointer moves right and b pointer moves left
# any time the a's pointer value exceeds or becomes equal to b's, we break
# answer will be sum of array a
for t in range(int(input())):
    n,k=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    b=sorted(list(map(int,input().split())))
    mi=0
    ma=n-1
    while(k):
        if a[mi]<b[ma]:
            b[ma],a[mi]=a[mi],b[ma]
            mi+=1
            ma-=1
        else:
            break
        k-=1
    print(sum(a))