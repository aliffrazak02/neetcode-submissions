class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        difference = set()
        for idx, val in enumerate(nums):
            complement = target - val
            if complement in difference:
                return [nums.index(complement), idx]
            difference.add(val)
