class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        for(auto i:num){
            while(ans.length() && ans.back()>i && k){
                ans.pop_back();
                --k;
            }
            if(ans.length() || i!='0')
                ans+=i;
        }
        while(k-- && ans.length())
            ans.pop_back();
        return ans.length()? ans:"0";
    }
};
