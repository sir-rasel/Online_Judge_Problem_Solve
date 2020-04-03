class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0],ans = nums[0];

        for(int i=1;i<nums.size();i++){
            if(maxSum+nums[i]<nums[i]) {
                maxSum = nums[i];
                ans = max(ans,maxSum);
            }
            else {
                maxSum+=nums[i];
                ans = max(ans,maxSum);
            }
        }

        return ans;
    }
};
