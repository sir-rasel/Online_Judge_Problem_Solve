class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        start,end,N = 0,0,len(nums)
        count,product = 0,1
        while end < N:
            product *= nums[end]
           
            while(product >=k and end >= start):
                product /= nums[start]
                start +=1
            
            count += end - start + 1
            end +=1
        
        return count