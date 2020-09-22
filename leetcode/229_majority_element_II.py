class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        tmp1, tmp2, count1, count2 = 0, -1, 0, 0
        for cur in nums:
            if cur == tmp1:
                count1 += 1
            elif cur == tmp2:
                count2 += 1
            elif count1 == 0:
                tmp1 = cur
                count1 = 1
            elif count2 == 0:
                tmp2 = cur
                count2 = 1
            else:
                count1 -= 1
                count2 -= 1
                
        ans, count1, count2, k = [], 0, 0, len(nums) // 3
        for num in nums:
            if num == tmp1:
                count1 += 1
            if num == tmp2:
                count2 += 1
                
        if count1 > k:
            ans.append(tmp1)
        if count2 > k:
            ans.append(tmp2)
        return ans