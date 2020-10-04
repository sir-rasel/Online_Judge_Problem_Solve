class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x: (x[0], -x[1]))
        end = intervals[0][1]
        count = 1
        
        for i in intervals:
            if i[1] > end:
                end = i[1]
                count += 1
        
        return count