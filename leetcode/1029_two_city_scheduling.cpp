class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size(), ans=0;

        vector<pair<int, int>>vec;
        for(int i=0; i<n ;i++)
            vec.push_back({costs[i][0]-costs[i][1], i});
        sort(vec.begin(), vec.end());

        for(int i = 0, j = n-1; i<j; i++,j--){
            ans += costs[vec[i].second][0];
            ans += costs[vec[j].second][1];
        }

        return ans;
    }
};
