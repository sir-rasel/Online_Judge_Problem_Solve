class Solution {
    bool check(int idx,vector<int>&nums){
        return nums[idx+1]>nums[idx];
    }

public:
    int findPeakElement(vector<int>& nums) {
        nums.push_back(INT_MIN);

        int l = 0, r = nums.size() - 1;
        while (l + 1 < r){
            int m = (l + r) / 2;
            if (check(m,nums)) l = m;
            else r = m;
        }
        return check(l,nums) ? r : l;
    }
};
