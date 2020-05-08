# auth: starkizard
# this is just bitwise xor. only to keep the leading zeros
b1=input()
b2=input()
answer=bin(int(b1,2)^int(b2,2))[2:]
print("0"*(len(b1)-len(answer)) + answer)  