class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> data;
        for(int i=0;i<nums1.size();i++){
            if(data.find(nums1[i])==data.end()){
                data[nums1[i]]=1;
            }else{
                data[nums1[i]]++;
            }
        }
        vector<int> res;
        for(int i=0;i<nums2.size();i++){
            if(data.find(nums2[i])!=data.end()&&data[nums2[i]]!=0){
                res.push_back(nums2[i]);
                data[nums2[i]]--;
            }
        }
        return res;
    }
};
