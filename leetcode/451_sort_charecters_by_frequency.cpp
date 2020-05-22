class Solution {
public:
    string frequencySort(string s) {
        vector<int> vec(128, 0);
        for (auto i: s) vec[i]++;

        vector<pair<int,char> > v;
        for (auto i = 0; i < 128; ++i)
            if (vec[i]> 0)
                v.push_back({vec[i], i});
        sort(v.rbegin(), v.rend());

        string ans = "";
        for (auto pair:v)
            ans.append(pair.first, pair.second);

        return ans;

    }
};
