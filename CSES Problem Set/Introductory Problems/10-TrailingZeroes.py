# auth: starkizard
# When we calculate a factorial the 5s and 2s in the prime factorization are the ones responsible for zeros.
# by observation the number of 5s will always be greater than the number of twos.
# so we need to calculate how many 5s are in the prime factorization of n!
# for numbers like 5 10 15 20 30 35 40 45, we have a single 5
# for numbers like 25 50 75 100 .. we have 2 5s
# for numbers like 125 250 ... etc we have 3 5s
# so to find the number of such numbers, we first add n/5 then n/25 and so on until you hit zero.
def main():
    #CODE GOES HERE:
    n=ii()
    count=0
    i=5
    while(n//i >0):
        count+=n//i
        i*=5
    print(count)
