# auth: starkizard
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        s=input()
        count=0
        stack=[]
        for i in s:
            if stack==[]:
                stack.append(i)
                continue
            if i=="1":
                if stack[-1]=="0":
                    stack.pop(-1)
                    count+=1
                else:
                    stack.append(i)
            else:
                if stack[-1]=="1":
                    stack.pop(-1)
                    count+=1
                else:
                    stack.append(i)
        print(["NET","DA"][count&1])
