# auth: starkizard
# We're given integers from 0 to n, if you write them in binary , you'll notice, that the last bit flips everytime, the second last bit flips every second element, the third last bit flips every 4th. the fourth last every 8th.
# thus , we know the number of flips of last bit is n/1
# second last is n/2
# third last is n/4
# forth is n/8 and so on
# answer is just summation of all this.
# this won't be exactly a gp becuase 15/2 is 7 , we can't have 7.5 flips as such. can only have 7 flips for the second last bit in this case.
import os
import sys
import io
import math 
  
 
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
 
for t in range(int(input())):
    n=int(input())
    answer=0
    while(n!=0):
        answer+=n
        n//=2
    print(answer)