class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int m = (int)nums.size();
        vector<vector<int> > ans;

        for(int i=0;i<(1<<m);i++){
            bitset<32>a(i);

            vector<int>temp;
            for(int j=0;j<m;j++)
                if(a[j]==1)
                    temp.push_back(nums[j]);
            ans.push_back(temp);
        }

        return ans;
    }
};
