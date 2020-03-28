class Solution {
public:
    int searchElementInCircularSortedArray(vector<int>& arr,int n,int element){
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==element) return mid;
            else if(arr[mid]<=arr[high]){
                if(arr[mid]<element and arr[high]>=element)
                    low = mid+1;
                else high = mid-1;
            }
            else{
                if(arr[low]<=element and arr[mid]>element)
                    high = mid-1;
                else low = mid+1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return searchElementInCircularSortedArray(nums,nums.size(),target);
    }
};
