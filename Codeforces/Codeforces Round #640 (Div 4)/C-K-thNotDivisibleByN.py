# auth: starkizard
# derived a formula by observation
# for n =3 let's see
# a=  1  2  4  5  7  8  10  11  13  14
# k=  1  2  3  4  5  6  7   8   9   10
# a-k=0  0  1  1  2  2  3   3   4   4
#
# We can see that a-k is just k/(n-1) -1  when k%n-1 ==0
# else it is k/(n-1)
# add k to these results and we get our answer

for t in range(int(input())):
    n,k=map(int,input().split())
    if k%(n-1)==0:
        print(k+ (k//(n-1) -1))
    else:
        print(k+(k//(n-1)))