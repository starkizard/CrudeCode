# auth: starkizard
# We need to calculate mismatches for ")"
# using a simple stack based method
def main():
    #code goes here
    for t in range(ii()):
        stack=[]
        n=ii()
        s=input()
        count=0
        for i in s:
            if i=="(":
                stack.append(i)
            else:
                if stack==[]:
                    count+=1
                else:
                    stack.pop(-1)
        print(count)
