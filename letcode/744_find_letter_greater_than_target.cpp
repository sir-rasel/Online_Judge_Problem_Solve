class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto it = upper_bound(letters.begin(),letters.end(),target);
        int idx;
        if(it==letters.end()){
            idx = it-letters.begin();
            idx = (idx%letters.size());
        }
        else if(*it==target){
            idx = it-letters.begin();
            idx = ((idx+1)%letters.size());
        }
        else idx = it-letters.begin();
        return letters[idx];
    }
};
