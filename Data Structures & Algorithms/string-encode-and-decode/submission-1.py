class Solution:

    def encode(self, strs: List[str]) -> str:
        ret = ''
        for s in strs:
            ret += str(len(s)) + '#' + s

        return ret 

    def decode(self, s: str) -> List[str]:
        ret = []
        i = 0
        j = 0

        while i < len(s):
            if s[i] == '#':
                count = int(s[j:i+1][:-1])
                ret.append(s[i+1:i+1+count])
                i += count + 1
                j = i
            i += 1
        return ret