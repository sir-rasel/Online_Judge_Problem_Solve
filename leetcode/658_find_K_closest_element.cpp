class Solution {
    int binarySearch(vector<int>& nums,int target){
        int l=0,h=nums.size()-1,ans=-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target) {
                ans=m;
                h = m-1;
            }
            else if(nums[m]<target) l = m+1;
            else h = m-1;
        }
        return ans==-1?l:ans;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> left, right;
        int n=arr.size(), i=binarySearch(arr,x);
        int j=i-1;
        while(left.size()+right.size()<k){
            if(j<0){
                right.push_back(arr[i]);
                i++;
            }
            else if(i>=n){
                left.push_back(arr[j]);
                j--;
            }
            else if(abs(arr[i]-x)<abs(arr[j]-x)){
                right.push_back(arr[i]);
                i++;
            }
            else{
                left.push_back(arr[j]);
                j--;
            }
        }
        reverse(left.begin(), left.end());
        left.insert( left.end(), right.begin(), right.end());
        return left;
    }
};
