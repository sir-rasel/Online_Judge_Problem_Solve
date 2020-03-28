class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            auto it = ans.begin()+index[i];
            ans.insert(it,nums[i]);
        }
        return ans;
    }
};
