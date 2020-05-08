#auth: starkizard
#using dictionaries to count the letters and their frequencies, if dictionaries of a+b is equal to c, then yes else no
#Code Golfed for fun!
a,b,c=map(input,[""]*3)
if{k:(a+b).count(k)for k in set(a+b)}=={y:c.count(y)for y in set(c)}:print("YES")
else:print("NO")