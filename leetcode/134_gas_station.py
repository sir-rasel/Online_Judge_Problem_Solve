class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        diff = [g-c for g, c in zip(gas, cost)]       
        idx, min_val, cur = 0, sys.maxsize, 0         
        for i, v in enumerate(diff):
            cur += v
            if cur <= min_val:
                min_val, idx = cur, i
        return (idx + 1) % len(diff) if cur >= 0 else -1
        