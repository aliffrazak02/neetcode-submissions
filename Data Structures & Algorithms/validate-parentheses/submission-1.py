class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        pmap = {')':'(',']':'[','}':'{'}

        for c in s:
            if c in pmap:
                if stack and stack[-1] == pmap[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
            
        return True if not stack else False