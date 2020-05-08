# author: starkizard
# storing all in a mapping, checking from 1 to n , and printing
# checking for an element in maps take o(1) averagely
# sorting the dictionary (map) and then printing all the values
input()
n=list(map(int,input().split()))
d={}
c=1
for i in n:
    d[i]=c
    c+=1
print(*[d[i] for i in sorted(d)])
