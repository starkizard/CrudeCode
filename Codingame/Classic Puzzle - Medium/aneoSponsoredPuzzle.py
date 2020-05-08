#author: starkizard
#question at : https://www.codingame.com/ide/puzzle/aneo
import sys
import math
def check(n):
    vel=speed
    while vel>0:
        valid=True
        for i in range(n):
            d=duration[i]
            t= (distance[i]*18//(5*(vel)))
            if t% (2*d)>=d:
                valid=False
                break
        if valid==True:
            return vel
        vel-=1    
    return vel    

speed = int(input())
light_count = int(input())
distance,duration=[],[]
for i in range(light_count):
    x,y=map(int,input().split())
    distance.append(x)
    duration.append(y)

print(check(light_count))