class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        # i = 0

        # for j in range(len(nums)):
        #      if nums[j] != val:
        #         nums[i] = nums[j]
        #         i += 1

        # return i

        i = 0
        for num in nums:
            if num != val: 
                nums[i] = num 
                i += 1
        return i