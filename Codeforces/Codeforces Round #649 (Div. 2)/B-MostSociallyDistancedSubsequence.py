# auth: starkizard
# Extracted from template
# We just need to print the local maxima and local minimas

def main():
    #CODE GOES HERE:
    for t in range(ii()):
        n=ii()
        p=li()
        answer=[p[0]]
        change=0
        if p[1]>=p[0]:
            change=1
        else:
            change=-1
        for i in range(1,n):
            if p[i]>=p[i-1] and change!=1:
                answer.append(p[i-1])
                change=1
            elif p[i]<p[i-1] and change!=-1:
                answer.append(p[i-1])
                change=-1
        answer.append(p[-1])
        print(len(answer))
        prr(answer)
 
