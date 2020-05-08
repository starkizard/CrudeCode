# auth: starkizard
# Counting all 4s and 7s and checking if that the string of counts contain only 4 or 7 (making a set , then checking if it's a subset of {4,7} ).
s=input()
if set(list(str(s.count("4")+s.count("7")))).issubset(set(["4","7"])):print("YES")
else:print("NO")