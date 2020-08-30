from collections import defaultdict

class UnionFind:
    def __init__(self):
        self.parents = defaultdict(lambda: -1)
        self.ranks = defaultdict(lambda: 1)
    def join(self,a,b):
        pa,pb = self.find(a), self.find(b)
        if pa == pb:
            return
        if self.ranks[pa] > self.ranks[pb]:
            self.parents[pb] = pa
            self.ranks[pa] += self.ranks[pb]
        else:
            self.parents[pa] = pb
            self.ranks[pb] += self.ranks[pa]
    def find(self,a):
        if self.parents[a] == -1:
            return a
        self.parents[a] = self.find(self.parents[a])
        return self.parents[a]

class Solution:
    def largestComponentSize(self, A) -> int:
        a_set = set(A)
        union_find = UnionFind()
        
        mx = max(A)
        seen = set()
        for base in range(2, mx + 1):
            if base in seen:
                continue
            prev = None
            for v in range(base, mx + 1, base):
                seen.add(v)
                if v in a_set:
                    if prev:
                        union_find.join(prev, v)
                    prev = v
        return max(union_find.ranks.values())

if __name__ == '__main__':
    A = [2, 3, 6, 7, 4, 12, 21, 39]
    driver = Solution()
    print(driver.largestComponentSize(A))