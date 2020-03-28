class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr1[26]={0};
        int arr2[26]={0};
        char ans=' ';
        for(int i=0;i<s.size();i++) arr1[s[i]-'a']++;
        for(int i=0;i<t.size();i++) arr2[t[i]-'a']++;
        for(int i=0;i<t.size();i++) {
            if(arr1[t[i]-'a']==0 or arr2[t[i]-'a']>arr1[t[i]-'a']) {
                ans = t[i];
                break;
            }
        }
        return ans;
    }
};
