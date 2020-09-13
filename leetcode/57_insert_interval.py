class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        start, end, n = 0, 0, len(intervals)
        while end < n:
            if newInterval[0] <= intervals[end][1] :
                if newInterval[1] < intervals[end][0]:
                    break
                newInterval[0] = min(newInterval[0], intervals[end][0])
                newInterval[1] = max(newInterval[1], intervals[end][1])
            else:
                start += 1
            
            end += 1
        
        return intervals[:start] + [newInterval] + intervals[end:]