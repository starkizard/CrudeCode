# author: starkizard
# implementation problem. function string computes what actually has to be printed, for n=5 i print from 0 to 4 store in a list , print 5 and print reverse of the list


def string(i):
    s=""
    for j in range(i):
        s+=str(j)+" "
    r=s[::-1]
    s+=str(i)
    s+=r
    return s



n=int(input())
spaces=2*n
l=[]
for i in range(n):
    l.append(" "*spaces + string(i))
    spaces-=2
l+=[string(n)]+l[::-1]
for i in l:
    print(i)