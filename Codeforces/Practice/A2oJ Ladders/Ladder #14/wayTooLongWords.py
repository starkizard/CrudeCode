# auth: starkizard
# Doing what the question says
# code golfed for fun!
# ONE LINER!

for n in range(int(input())):s=input();print([s,s[0]+str(len(s)-2)+s[-1]][len(s)>10])