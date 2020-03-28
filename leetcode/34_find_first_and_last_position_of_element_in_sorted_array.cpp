class Solution {
    int binarySearch(vector<int>& nums,int target,bool first){
        int l=0,h=nums.size()-1,ans=-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target) {
                ans=m;
                if(first) h=m-1;
                else l = m+1;
            }
            else if(nums[m]<target) l = m+1;
            else h = m-1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;

        res.push_back(binarySearch(nums,target,true));
        res.push_back(binarySearch(nums,target,false));

        return res;
    }
};
