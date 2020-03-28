class Solution {
public:
    void solve(long long value, int l, int r, set<int> &ans) {
        if (value > r) return;
        if(ans.count(value)!=0) return;
        ans.insert(value);
        if (value == 0) {
            for (int i = 1; i < 10; i++) solve(i, l, r, ans);
        } else {
            int d = value % 10;
            if (d - 1 >= 0) {
                solve(value * 10 + d - 1, l, r, ans);
            }
            if (d + 1 < 10) {
                solve(value * 10 + d + 1, l, r, ans);
            }
        }
    }
    vector<int> countSteppingNumbers(int low, int high) {
        set<int> ans;
        solve(0, low, high, ans);
        vector<int> v;
        for (auto x : ans) {
            if (x >= low && x <= high) v.push_back(x);
        }
        return v;
    }
};
