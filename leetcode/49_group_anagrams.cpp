class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> >ans;
        if(strs.size()!=0){
            map<string,int>check;
            int arr[strs.size()];
            int count=0;
            for(int i=0;i<strs.size();i++){
                string temp = strs[i];
                sort(temp.begin(),temp.end());
                if(check.count(temp)==0)
                    check[temp]=count++;
                arr[i]=check[temp];
            }

            ans.resize(check.size());
            for(int i=0;i<strs.size();i++)
                ans[arr[i]].push_back(strs[i]);
        }
        return ans;
    }
};
