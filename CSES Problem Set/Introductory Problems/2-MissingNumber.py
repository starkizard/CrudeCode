# auth: starkizard
# use a set to search in approx O(1) time 

def main():
    #CODE GOES HERE:
    n=ii()
    a=set(li())
    for i in range(1,n+1):
        if i not in a:
            print(i)
            return
