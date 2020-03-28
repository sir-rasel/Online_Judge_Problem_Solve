class Solution {
    int countVariant(vector<int>nums,int mid){
        int counter=0,left=0;
        for (int right = 0; right < nums.size(); ++right) {
            while (nums[right] - nums[left] > mid) left++;
            counter += right - left;
        }
        return counter;
    }

    int binarySearch(vector<int>nums,int k){
        int low = 0, high = nums[nums.size()-1]-nums[0];
        while(low<high){
            int mid = (low+high)/2;
            if(countVariant(nums,mid)>=k) high = mid;
            else low = mid+1;
        }
        return low;
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = binarySearch(nums,k);
        return ans;
    }
};
