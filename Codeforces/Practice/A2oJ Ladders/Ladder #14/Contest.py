# auth: starkizard
# doing what the question says
a,b,c,d=map(int,input().split())
s1=max( (3*a)//10 , a- (a*c)//250 )
s2=max( (3*b)//10 , b- (b*d)//250 )
if s1>s2:
    print("Misha")
elif s1==s2:
    print("Tie")
else:
    print("Vasya")