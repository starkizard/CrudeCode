# auth: starkizard
# we need to print distinct permutations in lexographical order.
# Using itertools for permutations and set to make them distinct, then sorting
# works becuase n<=8
def main():
    #CODE GOES HERE:
    s=list(input())
    l=list(set(itertools.permutations(s)))
    l.sort()
    print(len(l))
    for i in l:
        print("".join(i))
 
