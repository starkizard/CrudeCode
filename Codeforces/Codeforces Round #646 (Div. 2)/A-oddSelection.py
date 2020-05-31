# auth: starkizard
# let's count the number of odd and even , and call it nodd and neven
# let's deal with the obvious cases first
# if there are no odd numbers answer should be no, Because the sum of even numbers is always even
# then let's check the case where we have to select everything, i.e x==n 
# if there odd number of odds, only then the sum will be odd. therefore print yes or no otherwise
# now if x is odd, and we have at least 1 odd number with us. we need to take odd number of odds and fill the rest with even numbers, right?
# we can always do this.
# if x is even , we need to select at least one even element , and it will reduce to the problem of x being odd.  
import os
import sys
import io
import math 
    
    
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
    
for t in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    nodd=0
    for i in a:
        if i%2==1:
            nodd+=1
    neven=n-nodd
    if nodd==0:
        print("No")
        continue
    if x==n:
        if nodd%2==1:
            print("Yes")
        else:
            print("No")
        continue
    
    if x%2==0:
        if neven>=1:
            print("Yes")
        else:
            print("No")
    else:
        print("Yes")
