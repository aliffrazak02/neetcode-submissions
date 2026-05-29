class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for num in nums:
            val = nums.pop()
            if val in nums:
                return True
        return False