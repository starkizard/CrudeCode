# auth: starkizard
# Doing what the question says
# code golfed for fun!
# ONE LINER! 79 characters

for _ in" "*int(input()):s=input();m=len(s)-2;print([s,s[0]+str(m)+s[-1]][m>8])
