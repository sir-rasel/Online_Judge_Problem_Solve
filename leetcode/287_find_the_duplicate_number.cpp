class Solution {
    bool check(vector<int>nums,int mid){
        int count=0;
        for(auto it:nums){
            if(it<=mid) count++;
        }
        if(count<=mid) return true;
        else return false;
    }
    int binarySearch(vector<int>nums){
        int low=1,high=nums.size();
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(nums,mid)) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
public:
    int findDuplicate(vector<int>& nums) {
        return binarySearch(nums);
    }
};
