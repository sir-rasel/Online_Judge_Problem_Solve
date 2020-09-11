class Solution:
    def maxProduct(self, nums):
        if not nums:
            return 0
        
        maxx = minn = product = nums[0]
        for i in range(1, len(nums)):
            if nums[i] < 0:
                maxx, minn = minn, maxx
            
            maxx = max(nums[i], maxx * nums[i])
            minn = min(nums[i], minn * nums[i])
            product = max(maxx, product)
        
        return product