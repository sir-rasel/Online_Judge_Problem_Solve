class Solution:
    def partitionLabels(self, S: str) -> List[int]:
        rightmost = {c:i for i, c in enumerate(S)}
        res = list()
        left, right = 0, 0
        
        for i, c in enumerate(S):
            right = max(right, rightmost[c])
            
            if i == right:
                res.append(right - left + 1)
                left = right + 1

        return res
        