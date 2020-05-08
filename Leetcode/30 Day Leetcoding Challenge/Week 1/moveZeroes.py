class Solution:
    def moveZeroes(self, l: List[int]) -> None:
        c,counter = l.count(0),0
        if len(l)!=c:
            for i in l or counter==c:
                if i==0:
                    l.remove(0)
                    l.append(0)
                    counter+=1