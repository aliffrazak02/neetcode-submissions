class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num_map = {}
        count = []
        res = []

        # Hash Map of frequency
        for n in nums:
            num_map[n] = 1 + num_map.get(n, 0)

        for key, value in num_map.items():
            count.append([value, key])

        count.sort()

        for i in range(k):
            res.append(count.pop()[1])

        return res
