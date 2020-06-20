# auth: starkizard
# maintain two variables: answer and current , answer represents the max of all currents , and current represents the length of current substring with same charavters
# loop through the string and check whether the current character is equal to the previous character: current++
# else we know weve reached the end of the same character substring, so we compare it with answer. make answer max and reset current to 1
# there may be a possibility that the string ends with the same character string and current at the end is greater than 1 like ACTTTT 
# we need to account for that afte the loop too
def main():
    #CODE GOES HERE:
    s=input()
    answer=1
    current=1
    for i in range(1,len(s)):
        if s[i-1]==s[i]:
            current+=1
        else:
            answer=max(answer,current)
            current=1
    answer=max(answer,current)
    print(answer)        

    
