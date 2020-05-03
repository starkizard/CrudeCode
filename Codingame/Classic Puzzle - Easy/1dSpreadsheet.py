#author:starkizard
#question at : https://www.codingame.com/ide/puzzle/1d-spreadsheet
def check(array):
    for i in array:
        if type(i)!=type(1):
            return False
    return True
n=int(input())
answer=[None]*n
first=True
while(check(answer)!=True):
    for i in range(n):
        if type(answer[i])!=type(1) and answer[i]!=None:
            op,arg1,arg2=answer[i]
        elif answer[i]==None:
            op,arg1,arg2=input().split()
        else:
            continue
        try: 
            arg1=int(arg1)
        except:
            if type(answer[int(arg1[1:])])==type(1):
                arg1=answer[int(arg1[1:])]
        try: 
            arg2=int(arg2)
        except:
            if arg2!="_":
                if type(answer[int(arg2[1:])])==type(1):
                    arg2=answer[int(arg2[1:])]
        done=0
        if op=="VALUE":
            if type(arg1)==type(1):
                answer[i]=arg1
                done=1
        elif op=="ADD":
            if type(arg1)==type(arg2)==type(1):
                answer[i]=arg1+arg2
                done=1
        elif op=="SUB":
            if type(arg1)==type(arg2)==type(1):
                answer[i]=arg1-arg2
                done=1
        else:
            if type(arg1)==type(arg2)==type(1):
                answer[i]=arg1*arg2
                done=1
        if done==0:
            answer[i]=[op,str(arg1),str(arg2)]
for element in answer:
    print(element)