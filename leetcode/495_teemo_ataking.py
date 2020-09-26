class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        if not timeSeries:
            return 0
        
        totalTime = 0
        for i in range(0, len(timeSeries) - 1):
            totalTime += min(duration, timeSeries[i + 1] - timeSeries[i])

        return totalTime + duration
        