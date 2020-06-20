# auth: starkizard
# we can go greedily for i from 1 to n and see if array[i]<array[i-1], if it is, add the difference to the answer and  change array[i] to array[i-1]
def main():
    #CODE GOES HERE:
    n=ii()
    a=li()
    answer=0
    for i in range(1,n):
        if a[i]<a[i-1]:
            answer+=a[i-1]-a[i]
            a[i]=a[i-1]
    print(answer)
 
