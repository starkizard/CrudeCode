#author: starkizard
class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        def getchar(S):
            skip=0
            for i in reversed(S):
                if i=="#": skip+=1
                elif skip: skip-=1
                else: yield i
        answer=True
        for i,j in itertools.zip_longest(getchar(S),getchar(T)):
            if i!=j:
                answer=False
                break
        return answer