class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty()) return -1;
        int start =0, end = nums.size() -1;
        while(start<end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == nums[end]){
                if(nums[start] == nums[mid]){
                    int i = mid;
                    while(i>start && nums[i] == nums[start]) --i;
                    if(i == start) start = mid + 1;
                    else end = mid;
                } else  end = mid;
            }
            else if(nums[mid] < nums[end]) end = mid;
            else start = mid + 1;
        }
        return nums[end];
    }
};
