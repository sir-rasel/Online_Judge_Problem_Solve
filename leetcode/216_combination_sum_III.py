from itertools import combinations

class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        list_, ans = range(1, 10), list()
        ans = list(list(x) for x in combinations(list_, k) if sum(x) == n)
        
        return ans