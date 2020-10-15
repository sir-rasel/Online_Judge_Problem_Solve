class Solution:
    def inverse(self, i, j, nums):
        while i < j:
            nums[i], nums[j] = nums[j], nums[i]
            i, j = i + 1, j - 1

    def rotate(self, nums: List[int], k: int) -> None:        
        n = len(nums)
        k = k % n
        
        self.inverse(0, n - k - 1, nums)
        self.inverse(n - k, n - 1, nums)
        self.inverse(0, n - 1, nums)
        
        return nums