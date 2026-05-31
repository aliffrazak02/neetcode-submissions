from collections import deque

class Solution:

    def encode(self, strs: List[str]) -> str:
        # create a unique identifier for each item storing len of striing i.e 'Hello5#World' or '7#hel6#lo lgth = 4
        ret = ''
        for s in strs:
            ret += str(len(s)) + '#' + s
        return ret

    def decode(self, s: str) -> List[str]:
        ret = []
        lgth = ''
        word = ''
        queue = deque(s)

        while queue:
            lgth += queue.popleft()
            if queue[0] == '#':
                queue.popleft()
                for i in range(int(lgth)):
                    word += queue.popleft()
                ret.append(word)
                word = ''
                lgth = ''

        return ret
