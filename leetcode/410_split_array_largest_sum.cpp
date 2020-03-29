class Solution {
public:
    typedef long long int ll;
    int split(const vector<int>& nums, ll x) {
        ll sum = 0;
        int res = 1;
        for (size_t i=0; i<nums.size(); i++) {
            if (nums[i] > x) {
                return -1;
            } else if (sum + nums[i] > x) {
                res++;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
        }
        return res;
    }

    int splitArray(vector<int>& nums, int m) {
        ll l = *min_element(nums.begin(), nums.end());
        ll r = accumulate(nums.begin(), nums.end(), 0ll);

        ll ans = r;
        while (r-l > 1) {
            ll mid = (l+r)/2;
            int cnt = split(nums, mid);
            if (cnt >=0 && cnt <= m) {
                r = mid;
                ans = min(ans, mid);
            } else {
                l = mid;
            }
        }
        return ans;
    }
};
