#author: starkizard
#question at: https://www.codingame.com/ide/puzzle/rectangle-partition
import sys
import math
w, h, count_x, count_y = [int(i) for i in input().split()]
x=[0]
y=[0]
for i in input().split():
    x.append(int(i))
x.append(int(w))    
for i in input().split():
    y.append(int(i))
y.append(h)
x,y=x[::-1],y[::-1]
subwidth,subheight={},{}
for i in range(len(x)):
    for j in range(i+1,len(x)):
        if x[i]-x[j] in subwidth:
            subwidth[x[i]-x[j]]+=1
        else:
            subwidth[x[i]-x[j]]=1

for i in range(len(y)):
    for j in range(i+1,len(y)):
        if y[i]-y[j] in subheight:
            subheight[y[i]-y[j]]+=1
        else:
            subheight[y[i]-y[j]]=1

count=0
for i in subwidth:
    try:
        count+=subheight[i]*subwidth[i]
    except:
        pass
print(count)
