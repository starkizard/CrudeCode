# auth: starkizard
# there's only one possible figure when week is 1 size
# 2 when week is 2
# 3 when week is 3 
# and so on
# but, for the last one if min(n,r) is equal to x, then we need to subtract min(n,r) -1 cases.

def main():
    for t in range(ii()):
        n,r=mi()
        x=min(n,r)
        c=(x*(x+1)//2)
        if x==n:
            c-=x-1
        print(c)
