# template by 3xC and starkizard.
# contributors: 

#####################################################################################
import sys
import os
import time
import collections
from collections import Counter, deque
import itertools
import math
import timeit
import random
import string
import io
#####################################################################################


def sieve(n):
    """ returns a list of prime numbers till n """
    if n < 2: return list()
    prime = [True for _ in range(n + 1)]
    p = 3
    while p * p <= n:
        if prime[p]:
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 2
    r = [2]
    for p in range(3, n + 1, 2):
        if prime[p]:
            r.append(p)
    return r



def divs(n, start=1):
    """ returns a list of all divisors till n """
    divisors = []
    for i in range(start, int(math.sqrt(n) + 1)):
        if n % i == 0:
            if n / i == i:
                divisors.append(i)
            else:
                divisors.extend([i, n // i])
    return divisors



def divn(n, primes):
    """ returns the number of divisors, two arguments n and the sieve till n """
    divs_number = 1
    for i in primes:
        if n == 1:
            return divs_number
        t = 1
        while n % i == 0:
            t += 1
            n //= i
        divs_number *= t



def lrfind(d, x, default=-1):
    """ Takes 2 arguments an iterable and an element. returns a tuple (firstoccurence,lastoccurence) -1 if not found """
    left = right = -1
    for i in range(len(d)):
        if d[i] == x:
            if left == -1: left = i
            right = i
    if left == -1:
        return default, default
    else:
        return left, right

def gcd(x, y): # math.gcd is slower
    """ returns greatest common divisor of x and y """
    while y:
        x, y = y, x % y
    return x

def ceil(n, k): return n // k + (n % k != 0) #returns math.ceil but protecting against floating inconsistencies
def ii(): return int(input()) #inputs integer
def mi(): return map(int, input().split()) # inputting space seperated variables for example x,y,z
def li(): return list(map(int, input().split())) #inputting a space seperated list of integers
def lw(): return input().split() #inputting a space seperated list of strings
def lcm(a, b): return abs(a * b) // gcd(a, b) #returns LCM of two arguments
def prr(a, sep=' ', end='\n'): print(sep.join(map(str, a)), end=end) #For printing an iterable with seperator sep as optional second argument (default : " "), ending character (default: "\n") as optional third
def dd(): return collections.defaultdict(int) #returns a dictionary with values defaulted to 0
def ddl(): return collections.defaultdict(list) #returns a dictionary with values defaulted to []


## Uncomment below line if using online judge for fast input
## note this input also reads in \n so remember to rstrip the input if using strings

#input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

###################################################################
#CODE GOES HERE:
n,k=mi()
a=li()
count=0
for i in a:
    if i<=5-k:
        count+=1
print(count//3)
