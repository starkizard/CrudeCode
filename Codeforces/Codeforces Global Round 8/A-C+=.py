# auth: starkizard
# the operation equates to fibonacci starting with min(a,b) and max(a,b) , just count till b becomes > n
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        a,b,n=mi()
        a,b=min(a,b),max(a,b)
        count=0
        while (b<=n):
            a,b=b,a+b
            count+=1
        print(count)
