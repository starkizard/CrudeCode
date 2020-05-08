class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        best_with_stock=float("-inf")
        best_without_stock=0
        for x in prices:
            best_with_stock=max(best_with_stock,best_without_stock - x)
            best_without_stock=max(best_without_stock,best_with_stock + x)
        return best_without_stock