class Solution(object):
    def checkSubarraySum(self, nums, k):
        res = {0: -1}
        sum = 0
        
        for i in range(0,len(nums)):
            sum += nums[i]
            if k != 0:
                sum = sum % k
            if sum in res:
                if i - res[sum] > 1:
                    return True
            else:
                res[sum] = i
        
        return False