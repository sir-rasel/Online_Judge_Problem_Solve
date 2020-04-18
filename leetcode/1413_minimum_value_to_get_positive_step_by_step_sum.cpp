class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minn = 0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            minn = min(minn,sum);
        }
        return abs(minn-1);
    }
};
