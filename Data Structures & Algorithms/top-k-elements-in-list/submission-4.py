class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num_map = {}
        count = []
        res = []

        # Map value to frequency
        for n in nums:
            num_map[n] = 1 + num_map.get(n, 0)

        # List of [count, value]
        for key, value in num_map.items():
            count.append([value, key])

        # sort ascending by count
        count.sort()

        # pop highest count value in range k
        for i in range(k):
            res.append(count.pop()[1])

        return res
