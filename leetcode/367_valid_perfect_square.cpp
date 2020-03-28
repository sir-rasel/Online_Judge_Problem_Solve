class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x == 0 || x == 1){
            return true;
        }

        int start = 1;
        long end = x/2;
        long ans;

        while(start <= end){
            long mid = (start + end)/2;

            if(mid * mid == x){
                 return true;
            }
            else if(mid * mid < x){
                  start = mid+1;
                  ans = mid;
            } else {
               end = mid - 1;
            }
        }
       return ans*ans==x;
    }
};
