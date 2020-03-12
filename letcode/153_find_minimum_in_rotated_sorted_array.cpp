class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size() -1,n=arr.size();
        while(low<=high){
            int mid = (low+high)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;

            if(arr[low]<=arr[high]) return arr[low];
            else if(arr[mid]<=arr[prev] and arr[mid]<=arr[next])
                return arr[mid];
            else if(arr[mid]<=arr[high]) high = mid-1;
            else if(arr[mid]>=arr[low]) low = mid+1;
        }
        return arr[0];
    }
};
