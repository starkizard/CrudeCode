class Solution:
    def isHappy(self, n: int) -> bool:
        for j in range(20):
            n=sum([int(x)*int(x) for x in str(n)])
        return n==1    
