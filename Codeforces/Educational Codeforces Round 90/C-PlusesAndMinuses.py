# auth: starkizard
def main():
    #code goes here
    for t in range(ii()):
        s=input()
        no1=0
        res=0
        cur=0
        for i in s:
            cur+=1
            if i=="+":
                no1+=1
            else:
                if i=="-":
                    if no1==0:
                        res+=cur
                    else:
                        no1-=1
        while(cur<=len(s)):
            res+=cur
            cur+=1
        print(res)
 
