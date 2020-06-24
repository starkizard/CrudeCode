# auth: starkizard
# We'll have to repeat multiple characters in order to get the most BANG FOR THE BUCK
# for ex adding two different characters ccoodeforces leads to 2*2*1*1*1*1*1*1*1*1 subsequences
# the product of  amount of times all character repeat is the number of subsequences as shown above
# So, first we calculate the amount of repetitions we have to make to every character to get us as close to n
# I do that using a loop to calculate the max i where i**10 <=n .
# then we have to see how many extra repetitions we'd have to make , and while making those repetitions character by character.
# if we are still trailing n, we increase it until we're o longer trailing n
# Having all the repetitions. we print the desired output
def main():
    #CODE GOES HERE:
    n=ii()
    if n<=3:
        print("codeforce"+"s"*n)
    else:
        i=2
        while i**10<n:
            i+=1
        if i**10>n:
            i-=1
        left=0
        index=0
        while ((i+1)**(index))*(i**(10-index)) <n:
            index+=1
        st="codeforces"
        for s in range(10):
            if s<index:
                print(st[s]*(i+1),end="")
            else:
                print(st[s]*i,end="")
        print()   
        
