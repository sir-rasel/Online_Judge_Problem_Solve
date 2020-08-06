class Solution(object):
    def findDuplicates(self, nums):
        ans = list()
        for num in nums:
            if nums[abs(num)-1] < 0:
                ans.append(abs(num))
            else:
                nums[abs(num)-1] *= -1
        return ans