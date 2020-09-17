class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        if not intervals:
            return list()
        
        intervals.sort()
        overlaping_interval = list()
        overlaping_interval.append(intervals[0])
        
        for i in range(1, len(intervals)):
            start, end = overlaping_interval[-1]
            if intervals[i][0] > end:
                overlaping_interval.append(intervals[i])
            elif intervals[i][1] > end:
                end = intervals[i][1]
                overlaping_interval[-1] = (start, end)
        
        return overlaping_interval