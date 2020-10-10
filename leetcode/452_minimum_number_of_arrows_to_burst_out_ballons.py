class Solution:
    def findMinArrowShots(self, A):
        if not A: 
            return 0
        
        A.sort(key=lambda x:x[1])
        ret = 1
        right = A[0][1]
        for x, y in A:
            if x <= right:
                continue
            ret += 1
            right = y
        return ret