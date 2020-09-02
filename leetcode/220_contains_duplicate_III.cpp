class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if (nums.size() == 0 or k == 0)
            return false;

        vector<pair<long long, int> > numsIndices(nums.size());

        for (int i = 0; i < nums.size(); i++)
            numsIndices[i] = make_pair(nums[i], i);
        sort(numsIndices.begin(), numsIndices.end());

        for (int i = 0; i < numsIndices.size() - 1; i++) {
            int j = i + 1;
            while (j < numsIndices.size() && abs(numsIndices[i].first - numsIndices[j].first) <= t){
                if (abs(numsIndices[i].second - numsIndices[j].second) <= k)
                    return true;
                j++;
            }
        }

        return false;
    }
};
