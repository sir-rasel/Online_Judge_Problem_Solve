class Solution:
     def findMaximumXOR(self, nums):
        ans, mask = 0, 0
        for i in range(31, -1, -1):
            mask |= 1 << i
            found = {num & mask for num in nums}
            
            start = ans | 1 <<  i
            if any(start ^ pref in found for pref in found):
                ans = start
        return ans 