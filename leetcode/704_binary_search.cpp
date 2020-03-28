class Solution {
public:
    int search(vector<int>& nums, int target) {
        int firstIndex = 0, lastIndex = nums.size()-1;
        while(firstIndex<=lastIndex){
            int midIndex = (firstIndex+lastIndex)/2;
            if(nums[midIndex]==target) return midIndex;
            else if(nums[midIndex]>target) lastIndex = midIndex-1;
            else firstIndex = midIndex+1;
        }
        return -1;
    }
};
