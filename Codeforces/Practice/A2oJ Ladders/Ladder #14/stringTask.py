# auth: starkizard
# inputs converted into lowercase
# vowels are in a set for fast "in" operator
# l is our answer, whenever we encounter vowels we skip them and whenever we encounter consonants
# We add a dot
s=input().lower()
l=""
vowels=set(["a",'e','i','o','u','y'])
for i in s:
    if i in vowels:
        continue
    else:
        l+="."+i
print(l)
