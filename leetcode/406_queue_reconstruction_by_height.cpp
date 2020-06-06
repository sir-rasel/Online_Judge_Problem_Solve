class Solution {
    static bool comp(vector<int> &a,vector<int> &b){
        return (a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]));
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),comp);

        int n = people.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
            ans.insert(ans.begin() + people[i][1], people[i]);

        return ans;
    }
};
