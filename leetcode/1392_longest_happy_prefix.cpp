class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        vector<int> v(n, 0);
        int len=0;
        for(int i=1; i<n; ++i) {
            if(s[i]==s[len]) {
                len++;
                v[i]=len;
            } else {
                if(len)
                    len=v[len-1], --i;
                else
                    v[i]=0;
            }
        }
        return s.substr(0, v[n-1]);
    }
};
