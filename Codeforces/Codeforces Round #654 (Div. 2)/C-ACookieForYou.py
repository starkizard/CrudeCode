# auth: starkizard
# If a+b is less than n+m, means there aren't enough cookie for all the guests, print No
# if a>b and m > b , for every m, b will only reduce, so print no
# similarly if a<=b and m > a, print No
# print yes otherwie
def main():
    for t in range(ii()):
        a,b,n,m=mi()
        if (a+b)<(n+m):
            print("No")
            continue
        if(a>b):
            if(b<m):
                print("No")
                continue
 
        if(a<=b):
            if(a<m):
                print("No")
                continue
        print("Yes")
