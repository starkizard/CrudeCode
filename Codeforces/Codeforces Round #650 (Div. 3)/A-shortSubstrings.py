# auth: starkizard
# extracted from template
# every element except first and last element would appear twice.
# so loop through, add the first element , and then from the second element skip in steps of 2 
# also add the last element
def main():
    #CODE GOES HERE:
    for t in range(ii()):
        s=input()
        answer=""
        i=0
        while i <len(s):
            if i==0 or i==len(s)-1:
                answer+=s[i]
                i+=1
            else:
                answer+=s[i]
                i+=2
        print(answer)
