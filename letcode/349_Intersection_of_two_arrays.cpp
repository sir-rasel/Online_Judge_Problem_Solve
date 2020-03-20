class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) swap(nums1,nums2);
        sort(nums2.begin(),nums2.end());

        set<int>ans;
        for(int i=0;i<nums1.size();i++){
            auto it = lower_bound(nums2.begin(),nums2.end(),nums1[i]);
            if(it==nums2.end()) continue;
            else if(*it==nums1[i]) ans.insert(nums1[i]);
        }

        vector<int>finalAns;
        for(auto it:ans) finalAns.push_back(it);
        return finalAns;
    }
};
