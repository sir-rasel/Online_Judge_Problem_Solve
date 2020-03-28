class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);

        int nums1Length = nums1.size();
        int nums2Length = nums2.size();
        int totalSize = nums1Length + nums2Length;
        double answer=0;

        int low = 0,high = nums1Length;
        while(low<=high){
            int midPointX = (low+high)/2;
            int midPointY = ((totalSize+1)/2)-midPointX;

            int maxLeftX = midPointX==0?INT_MIN:nums1[midPointX-1];
            int minRightX = midPointX==nums1Length?INT_MAX:nums1[midPointX];

            int maxLeftY = midPointY==0?INT_MIN:nums2[midPointY-1];
            int minRightY = midPointY==nums2Length?INT_MAX:nums2[midPointY];

            if(maxLeftX<=minRightY and maxLeftY<=minRightX){
                if(totalSize%2==0)
                    answer = (max(maxLeftX,maxLeftY) + min(minRightX,minRightY))/2.0;
                else answer = max(maxLeftX,maxLeftY);
                break;
            }
            else if(maxLeftX>minRightY) high = midPointX-1;
            else low = midPointX+1;
        }
        return answer;
    }
};
