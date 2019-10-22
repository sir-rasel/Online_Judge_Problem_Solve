class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>str;
        for(int i=0;i<s.size();i++) str[s[i]]++;
        for(int i=0;i<s.size();i++){
            if(str[s[i]]==1) return i;
        }
        return -1;
    }
};
