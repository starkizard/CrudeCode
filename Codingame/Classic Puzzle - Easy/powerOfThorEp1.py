#auth:starkizard
#question at :https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
q=input
a,b,c,d=map(int,q().split())
y,x=b-d,a-c
while 1:
 q();s=''
 if y<0:s="N";y+=1
 if y>0:s="S";y-=1
 if x>0:s+="E";x-=1
 if x<0:s+="W";x+=1
 print(s) 
