class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[f]==0 and nums[i]!=0)
                swap(nums[i],nums[f]);
            if(nums[f]) f++;
        }
    }
};
