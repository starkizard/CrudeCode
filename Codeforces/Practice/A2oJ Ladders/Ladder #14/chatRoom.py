# auth: starkizard
# iterating over a list containing hello if the index reaches 5, we see that we've encountered everything in order and print yes, 
s=input()
l=["h","e","l","l","o"]
counter=0
for i in s:
    if counter>4:
        break
    else:
        if i==l[counter]:
            counter+=1
if counter==5:
    print("YES")
else:
    print("NO")