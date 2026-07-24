class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        for idx in range(len(arr)):
            arr[idx] = self.rMax(arr[idx+1:])

        arr[-1] = -1;

        return arr;
        
    def rMax(self, arr: List[int]) -> int:
        res = -1;
        for num in arr:
            if num > res:
                res = num            
        return res
