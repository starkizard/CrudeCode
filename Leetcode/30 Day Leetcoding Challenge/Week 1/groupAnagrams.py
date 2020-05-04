class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for i in strs:
            d.setdefault(tuple(sorted(i)),[]).append(i)
        return d.values()