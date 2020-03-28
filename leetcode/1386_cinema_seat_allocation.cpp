class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ret = n * 2;
        map<int, vector<int>> mp;
        for (auto v : reservedSeats) mp[v[0]].push_back(v[1]);
        for (auto p : mp) {
            bool one_ok = 1;
            bool left_ok = 1;
            bool right_ok = 1;
            for (auto x : p.second) {
                if (x >= 2 and x <= 5) left_ok = false;
                if (x >= 6 and x <= 9) right_ok = false;
                if (x >= 4 and x <= 7) one_ok = false;
            }
            if (left_ok and right_ok) continue;
            if (one_ok or left_ok or right_ok) ret--;
            else ret -= 2;
        }
        return ret;
    }
};
