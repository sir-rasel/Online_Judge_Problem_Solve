class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = set(x for x in nums if x > 0)
        nums = sorted(nums)
        
        result = 1
        for x in nums:
            if x != result:
                return result
            
            result += 1
        
        return result