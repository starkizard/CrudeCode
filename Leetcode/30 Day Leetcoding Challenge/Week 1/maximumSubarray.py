class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        answer=float("-inf")
        currentsum=0
        for x in nums:
            currentsum+=x
            answer=max(currentsum,answer)
            currentsum=max(currentsum,0)
        return int(answer)