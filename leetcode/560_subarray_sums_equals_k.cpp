class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int cur_sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
            if(cur_sum==k)
                ans++;

            if(m.count(cur_sum-k)!=0)
                ans+=m[cur_sum-k];

            m[cur_sum]++;
        }
        return ans;
    }
};
