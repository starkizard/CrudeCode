# auth: starkizard
# So there are infinite rooms, k can be any integer
# and after shifts are made guest k goes to k + a[k%n]
# to create a vacancy, we need at least two guests to be in a single room
# mod operator in the array shows that it repeats,
#  
# eg. in 5 5 5 1 , guest 0 goes to 0+a[0] = 5, guest 1 goes to 1+a[1] = 6, guest 2 to 7,
# guest 3 to 3+a[3]= room 4
# now to check whether more k will collide into same room, k will always be different, what will repeat, is a[k%n]
# to check whether for k1 and k2 , k1+a[k1%n] == k2+a[k2%n], we can check if the mod of all values i+(a[i]%n) are different
# if they turn out to be same, some collision will definitely occur
# for example in 0 1, guest 0 goes to 0+a[0])= room 0 ,guest 1 goes to 1+a[1]=room 2 , at first they seem they won't collide, but looking at guest 2,
# that person goes to 2+a[0] that is room 2 only
# this is because (0+a[0]%2)%2 clashes with (1+a[1]%2)%2. same logic implemented here



for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l=[]
    for i in range(n):
        l.append((i+(a[i]%n))%n)
    if len(l)!=len(list(set(l))):
        print("NO")
    else:
        print("YES")