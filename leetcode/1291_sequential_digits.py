class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        ans = list()
        for i in range(1, 9):
            while i < high and (rem := i%10):
                if i >= low:
                    ans.append(i)
                i = (i*10) + rem + 1
        return sorted(ans)