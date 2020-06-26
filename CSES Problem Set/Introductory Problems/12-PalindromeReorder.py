# auth: starkizard
# to form a palindrome we can first make a frequency table for all characters. if the count of more than one element is odd, it's impossible
# otherwise we can make the answer like :
# count/2 times of elements + oddelement times it's count + Reverse of the first element in this concatenation

def main():
    #code goes here
    s=input()
    d=dd()
    for i in s:
        d[i]+=1
    answer=""
    odd=0
    oddelem=""
    for i in d:
        if d[i]&1:
            odd+=1
            if odd>1:
                print("NO SOLUTION")
                return
            oddelem=i
        else:
            answer+=i*(d[i]//2)
    print(answer+oddelem*d[oddelem]+answer[::-1])  
