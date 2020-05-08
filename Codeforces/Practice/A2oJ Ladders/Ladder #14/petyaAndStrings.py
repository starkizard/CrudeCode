# auth: starkizard
# converting all inputs to lowercase, then comparing.
# python's string comparison works lexographically.
s=input().lower()
t=input().lower()
if(s<t):
    print(-1)
elif(s==t):
    print(0)
else:
    print(1)
