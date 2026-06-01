class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        l = len(nums)
        ans = [0] * 2 * l
        for idx, val in enumerate(nums):
            ans[idx], ans[idx+l] = val, val
        return ans

