class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_count = 0
        counter = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                counter += 1
            else:
                counter = 0
            
            if counter > max_count:
                max_count = counter

        return max_count