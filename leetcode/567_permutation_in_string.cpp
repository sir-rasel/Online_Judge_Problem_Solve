class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int letters[26] = {0};
        for(char c : s1) letters[c - 'a']++;

        bool result = false;
        int remaining = s1.size(), j = 0;
        for(int i = 0; i< s2.size(); i++){
            while(j < s2.size() && j - i < s1.size()){
                if(letters[s2.at(j++) - 'a']-- > 0)
                    remaining--;
            }
            if(remaining == 0 && j - i == s1.size())
                return true;
            if(letters[s2.at(i) - 'a']++ >= 0)
                remaining++;
        }
        return result;
    }
};
