class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        currmax = -1
        ans = [0] * len(arr)
        for i in range(len(arr)-1,-1,-1):
            ans[i] = currmax
            currmax = max(arr[i],currmax)    
        return ans