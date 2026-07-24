class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        ans = [-1]*len(arr)
        rMax = -1
        for i in reversed(range(len(arr))):
            ans[i] = rMax 
            rMax = max(rMax,arr[i])
        
        return ans