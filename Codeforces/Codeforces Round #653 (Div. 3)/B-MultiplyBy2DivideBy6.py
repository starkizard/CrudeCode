# auth: starkizard
# base case if n is given to be 1, we don't need to do anything
# To reach one , we need to reduce the number. only way is to divide by 6.
# whenever we divide by three, a factor of 3 and a factor of 2 is reduced.
# So we first count the number of 3s in the factorization of n. by repeatedly dividing it by 3 if it is divisible and counting it.
# doing the same for 2, we get two variables, count3 and count2.
# if there is any other factor left other than 1. we can conclude we will never reach to 1 because by dividing by 6, we will never be able to eliminate that factor.
# if count2 is greater than count3. also -1 , because multiplying by 2 will only increase the number of 2s. repeatedly dividing by 6 will lead to 2^x (x>1)
# if count3 is greater than count2, then we can multiply 2 (count3-count2) times and then divide by 6 count3 times. we'll land at 1.
def main():
    for t in range(ii()):
        n=ii()
        if n==1:
            print(0)
            continue
        if n%3!=0:
            print(-1)
            continue
        m=n
        count3=0
        while(m%3==0):
            m//=3
            count3+=1
        count2=0
        while(m%2==0):
            m//=2
            count2+=1
        if m!=1:
            print(-1)
            continue
        if count2>count3:
            print(-1)
        else:
            print(count3-count2 + count3)
 
