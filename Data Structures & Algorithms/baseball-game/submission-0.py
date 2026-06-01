class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []

        for i in range(len((operations))):
            op = operations[i]
            

            if op == 'C':
                stack.pop()
            elif op == 'D':
                curr = int(stack[-1])
                stack.append(curr*2)
            elif op == '+':
                curr = int(stack[-1])
                prev = int(stack[-2])
                stack.append(curr+prev)
            else:
                stack.append(int(op))

        return sum(stack)

                