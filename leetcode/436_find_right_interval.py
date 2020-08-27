class Solution:
    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        n = len(intervals)
        if not n:
            return []
        index_map = dict()
        max_start = intervals[0][0]
        for index, interval in enumerate(intervals):
            index_map[interval[0]] = index
            max_start = max(max_start, interval[0])
        
        result = [-1] * n
        for index, interval in enumerate(intervals):
            end = interval[1]
            while end not in index_map and end <= max_start:
                end += 1
            if end in index_map:
                result[index] = index_map[end]
        return result